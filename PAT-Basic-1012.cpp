#include <iostream>
#include <stack>

using namespace std;

int main(){
    int A,B,C,D;
    cin>>A>>B>>D;
    C=A+B;
	stack<int> s;
    while(C/D!=0){
    	s.push(C%D);
    	C/=D;
    }
    s.push(C);
    while(!s.empty()){
    	cout<<s.top();
		s.pop();
    }
}