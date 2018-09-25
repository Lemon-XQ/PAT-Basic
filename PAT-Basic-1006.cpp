#include <iostream>

using namespace std;

int main(){
	string A,B;
	int DA,DB;
	cin>>A>>DA>>B>>DB;
	long long PA=0,PB=0;
	int count1=0,count2=0;
	for(int i=0;i<A.length();i++){
		if(A[i]-'0'==DA) count1++;
	}
	for(int i=0;i<B.length();i++){
		if(B[i]-'0'==DB) count2++;
	}
	int factor=1;
	for(int i=0;i<count1;i++){
		PA+=factor*DA;
		factor*=10;
	}
	factor=1;
	for(int i=0;i<count2;i++){
		PB+=factor*DB;
		factor*=10;
	}
	cout<<PA+PB<<endl;
} 