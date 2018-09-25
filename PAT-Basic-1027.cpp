#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string P,A;
    cin>>P>>A;
    int g1,g2,g3,s1,s2,s3,k1,k2,k3;
    int first=P.find('.'),last=P.find_last_of('.');
    g1=atoi(P.substr(0,first).c_str());
    s1=atoi(P.substr(first+1,last-first-1).c_str());
    k1=atoi(P.substr(last+1,P.length()-last).c_str());
    first=A.find('.'); last=A.find_last_of('.');
    g2=atoi(A.substr(0,first).c_str());
    s2=atoi(A.substr(first+1,last-first-1).c_str());
    k2=atoi(A.substr(last+1,A.length()-last).c_str());
	// 17s=1g 29k=1s
	int sum1,sum2;
	sum1=(g1*17+s1)*29+k1;
	sum2=(g2*17+s2)*29+k2;
	int sign=1;
	if(sum2<sum1) sign=-1;
	g3=(sum2-sum1)/(17*29);
	s3=(sum2-sum1)%(17*29)/29;
	k3=(sum2-sum1)%(17*29)%29;
	cout<<g3<<"."<<s3*sign<<"."<<k3*sign<<endl;// 只有第一个带-号 
}