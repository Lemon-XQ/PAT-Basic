#include <iostream>

using namespace std;

int main(){
	int T;
	long long A,B,C;
	string flag;
	cin >> T;
	for(int i=0;i<T;i++){
		cin>>A>>B>>C;
		if(A+B>C) flag="true";
		else flag="false"; 
		cout<<"Case #"<<i+1<<": "<<flag<<endl;
	}
} 