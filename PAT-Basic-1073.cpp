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
   	while((index=str.find(' ',index)) != string::npos) str.erase(index,1);// 去除空格 
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
    int count[M][5];// 每道题每个选项的错题人数 
    int error[M];// 每道题的错误人数 
    for(int i=0;i<M;i++){
    	error[i]=0;
    	for(int j=0;j<5;j++) count[i][j]=0;
    } 
    getchar();
    for(int i=0;i<N;i++){
    	string str;
    	getline(cin,str);
    	int index=0,num=0; // num记录题号 
    	double score=0;
    	trim(str);
	    while((index=str.find('(',index)) != string::npos){// 匹配()
	    	int index2=str.find(')',index);
	    	string s=str.substr(index+1+1,index2-index-1-1);// 跳过选中的选项个数 
			index=index2;
			trim(s);	  
			if(s==v[num].ans){
				score+=v[num].score;
			}else{// 统计错误选项： 注意假如正确答案为ab，选了cd，则错误选项为abcd （漏选+错选） 
				string str=v[num].ans+s;// 正确答案和自己的答案拼接，重复的字符为选对的选项，不纳入统计  
				sort(str.begin(),str.end());
				bool louxuan=false;
				int len=s.length(),i;
				for(i=0;i<str.length()-1;i++){
					if(str[i]!=str[i+1]) count[num][str[i]-'a']++;
					else{
						i++; // abbcd说明b是正确选项，跳过 	
						len--;// len=0说明漏选 
					} 
				}
				// 最后一个的处理 
				i=str.length()-1;
				if(str[i]!=str[i-1]) count[num][str[i]-'a']++;
				if(len==0) score+=v[num].score/2.0;				
			}
			num++; 	
	    }
	    printf("%.1lf\n",score);
    }
    // 找到错误人数最多的 
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