#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
	int M,X,Y,a,b;
	double c;// 丙不一定是整数= =
	cin>>M>>X>>Y;
	for(a=99;a>=10;a--){
		b=a/10+a%10*10;
		c=abs(a-b)/(double)X;
		if(c!=0 && b/c==Y) break;
	}
	if(a==9) cout<<"No Solution"<<endl;
	else{
		string res1,res2,res3;
		cout<<a<<" ";
		res1=(a>M)?"Cong":(a==M)?"Ping":"Gai";
		res2=(b>M)?"Cong":(b==M)?"Ping":"Gai";
		res3=(c>M)?"Cong":(c==M)?"Ping":"Gai";
		cout<<res1<<" "<<res2<<" "<<res3<<endl;
	}
	return 0;
}
