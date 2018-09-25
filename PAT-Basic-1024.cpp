#include <iostream>
#include <sstream>

using namespace std;

int gcd(long long a,long long b){
	int c;
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

string solution(long long a,long long b){
	stringstream ss;
	bool sign=true;
	if(a==0) return "0";
	if(a<0&&b>0 || a>0&&b<0){
	//if(a*b<0){ // mmp啊第三个测试点一直过不去竟然是这里，我猜大概是两个longlong相乘溢出了？ 
		sign=false;
		ss<<"(-";
		a=abs(a);
		b=abs(b);
	}
	long long d=gcd(a,b);
	if(d!=0){
	  	a/=d; b/=d;
	}
	if(a/b!=0) ss<<a/b;	
	if(a%b!=0){
		if(a/b!=0) ss<<" ";
		ss<<a%b<<"/"<<b;
	} 
	if(!sign) ss<<")";
	return ss.str();		
}


int main(){
    string str_1,str_2;
    cin>>str_1>>str_2;
	long long a1,b1,a2,b2,a3,b3;// 注意不能用int，不然会浮点错误 
	int index1=str_1.find('/'),index2=str_2.find('/');
	a1=atoi(str_1.substr(0,index1).c_str());
	b1=atoi(str_1.substr(index1+1,str_1.length()-index1-1).c_str());
	a2=atoi(str_2.substr(0,index2).c_str());
	b2=atoi(str_2.substr(index2+1,str_2.length()-index2-1).c_str());
	
	// 化为最简
	string num1,num2,ans; 
	num1=solution(a1,b1);
	num2=solution(a2,b2);
	
	// 加法
	a3=a1*b2+a2*b1;
	b3=b1*b2;	
	ans=solution(a3,b3);
	cout<<num1<<" + "<<num2<<" = "<<ans<<endl;
	
	// 减法
	a3=a1*b2-a2*b1;
	b3=b1*b2;
	ans=solution(a3,b3);
	cout<<num1<<" - "<<num2<<" = "<<ans<<endl;
	
	// 乘法 
	a3=a1*a2;
	b3=b1*b2;
	ans=solution(a3,b3);
	cout<<num1<<" * "<<num2<<" = "<<ans<<endl;
	
	// 除法
	if(a2==0) ans="Inf";
	else{
		a3=a1*b2;
		b3=b1*a2;
		ans=solution(a3,b3);
	}
	cout<<num1<<" / "<<num2<<" = "<<ans<<endl; 
}