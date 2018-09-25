#include <iostream>

using namespace std;

int main(){
	string A;
	int B;
	cin>>A>>B;
	string Q="";
	int R=0;
	for(int i=0;i<A.length();i++){
		int num=A[i]-'0';
		R=10*R+num;
		char c=R/B+'0';
		if(!(i==0&&c=='0') || A.length()==1)// 需要去掉首位为0且长度大于1的情况 
			Q.push_back(c);
		
		R=R%B;
	}
	cout<<Q<<" "<<R<<endl;
} 