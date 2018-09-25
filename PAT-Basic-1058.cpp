#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct multi{
	int score;
	int num_total;
	int num_yes;
	string ans;
};

void trim(string& str){
	int index=0; 
   	while((index=str.find(' ',index)) != string::npos) str.erase(index,1);// ȥ���ո� 
}

int main(){
    int N,M;
    cin>>N>>M;
    vector<multi> v; 
    for(int i=0;i<M;i++){
    	multi m;
    	cin>>m.score>>m.num_total>>m.num_yes;
    	for(int j=0;j<m.num_yes;j++){
    		char c;
	    	cin>>c;
	    	m.ans.push_back(c);
	    }
	    v.push_back(m);
    }
    int count[M];// �������� 
    for(int i=0;i<M;i++) count[i]=0;
    getchar();
    for(int i=0;i<N;i++){
    	string str;
    	getline(cin,str);
    	int index=0,num=0,score=0; // num��¼��� 
    	trim(str);
	    while((index=str.find('(',index)) != string::npos){// ƥ��()
	    	int index2=str.find(')',index);
	    	string s=str.substr(index+1+1,index2-index-1-1);// ����ѡ�е�ѡ����� 
			index=index2;
			trim(s);	  
			if(s==v[num].ans){
				score+=v[num].score;
			}else{
				count[num]++;
			}
			num++; 	
	    }
	    cout<<score<<endl;
    }
    // �ҵ������������ 
    int max=0;
    for(int i=0;i<M;i++){
    	if(count[i]>max) max=count[i];
    }
    bool flag=false; 
	if(max==0) cout<<"Too simple"<<endl;
	else{
		cout<<max<<" ";
		 for(int i=0;i<M;i++){
	    	if(count[i]==max){
	    		if(flag) cout<<" ";
	    		cout<<i+1;
	    		flag=true;
	    	} 
	    }
	}
}