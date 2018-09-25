#include <iostream>

using namespace std;

int main(){
    int N;
    char C;
    cin>>N>>C;
    for(int i=0;i<N;i++){
    	cout<<C;
    }
    cout<<endl;
    for(int i=0;i<(int)(N/2.0+0.5)-2;i++){
    	cout<<C;
    	for(int j=0;j<N-2;j++) cout<<" ";
    	cout<<C;
    	cout<<endl;
    }
    for(int i=0;i<N;i++){
    	cout<<C;
    }
}