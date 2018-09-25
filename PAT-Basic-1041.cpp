#include <iostream>

using namespace std;

int main(){
    int N,M;
    cin>>N;
    int s[N+1];
    string stuid[N+1];
    for(int i=0;i<N;i++){
    	string tmp;
		int test,exam;
    	cin>>tmp>>test>>exam;
    	s[test]=exam;
    	stuid[test]=tmp;
    }
    cin>>M;
    for(int i=0;i<M;i++){
    	int num;
    	cin>>num;
    	cout<<stuid[num]<<" "<<s[num]<<endl;
    }
}