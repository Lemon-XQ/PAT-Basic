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
			if(m[str]==0){// û�й��� 
				m[str]=1;
				flag=true;
				next=false;
				cout<<str<<endl;
			}else{
				next=true;
				S++;// ����ÿN���˳�һ�� 
			}			
		}
    }
    if(!flag) cout<<"Keep going..."<<endl;
}