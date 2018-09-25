#include <iostream>
#include <map>

using namespace std;

int main(){
    int M,N,S;
    cin>>M>>N>>S;
    bool flag=false,next=false;
    map<string,int> m;
    for(int i=0;i<M;i++){
    	string str;
		cin>>str;
		if((i+1>=S && (i+1-S)%N==0) || next==true){
			if(m[str]==0){// 没中过奖 
				m[str]=1;
				flag=true;
				next=false;
				cout<<str<<endl;
			}else{
				next=true;
				S++;// 保持每N个人抽一次 
			}			
		}
    }
    if(!flag) cout<<"Keep going..."<<endl;
}