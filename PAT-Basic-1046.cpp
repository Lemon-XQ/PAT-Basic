#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int count_a=0,count_b=0;
	for(int i=0;i<N;i++){
		int a1,a2,b1,b2;
		cin>>a1>>a2>>b1>>b2;
		if(a2==a1+b1 && b2!=a1+b1) count_b++;
		if(b2==a1+b1 && a2!=a1+b1) count_a++;
	} 
	cout<<count_a<<" "<<count_b<<endl;
}