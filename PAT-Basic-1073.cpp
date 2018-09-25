#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct multi{
	int score;
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
    	int num_total,num_yes;
    	cin>>m.score>>num_total>>num_yes;
    	for(int j=0;j<num_yes;j++){
    		char c;
	    	cin>>c;
	    	m.ans.push_back(c);
	    }
	    v.push_back(m);
    }
    int count[M][5];// ÿ����ÿ��ѡ��Ĵ������� 
    int error[M];// ÿ����Ĵ������� 
    for(int i=0;i<M;i++){
    	error[i]=0;
    	for(int j=0;j<5;j++) count[i][j]=0;
    } 
    getchar();
    for(int i=0;i<N;i++){
    	string str;
    	getline(cin,str);
    	int index=0,num=0; // num��¼��� 
    	double score=0;
    	trim(str);
	    while((index=str.find('(',index)) != string::npos){// ƥ��()
	    	int index2=str.find(')',index);
	    	string s=str.substr(index+1+1,index2-index-1-1);// ����ѡ�е�ѡ����� 
			index=index2;
			trim(s);	  
			if(s==v[num].ans){
				score+=v[num].score;
			}else{// ͳ�ƴ���ѡ� ע�������ȷ��Ϊab��ѡ��cd�������ѡ��Ϊabcd ��©ѡ+��ѡ�� 
				string str=v[num].ans+s;// ��ȷ�𰸺��Լ��Ĵ�ƴ�ӣ��ظ����ַ�Ϊѡ�Ե�ѡ�������ͳ��  
				sort(str.begin(),str.end());
				bool louxuan=false;
				int len=s.length(),i;
				for(i=0;i<str.length()-1;i++){
					if(str[i]!=str[i+1]) count[num][str[i]-'a']++;
					else{
						i++; // abbcd˵��b����ȷѡ����� 	
						len--;// len=0˵��©ѡ 
					} 
				}
				// ���һ���Ĵ��� 
				i=str.length()-1;
				if(str[i]!=str[i-1]) count[num][str[i]-'a']++;
				if(len==0) score+=v[num].score/2.0;				
			}
			num++; 	
	    }
	    printf("%.1lf\n",score);
    }
    // �ҵ������������� 
    int max=0;
    for(int i=0;i<M;i++){
    	for(int j=0;j<5;j++) max=max>count[i][j]?max:count[i][j];
    }
	if(max==0) cout<<"Too simple"<<endl;
	else{		
		 for(int i=0;i<M;i++){
    		for(int j=0;j<5;j++){
    			if(count[i][j]==max){
    				cout<<max<<" "<<i+1<<"-"<<char('a'+j)<<endl;
	    		}
	    	} 
	    }
	}    
}