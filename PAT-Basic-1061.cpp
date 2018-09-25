#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int ans[M],score[M];
    for(int i=0;i<M;i++){
    	cin>>score[i];
    }
    for(int i=0;i<M;i++){
    	cin>>ans[i];
    }
    for(int i=0;i<N;i++){
    	int total=0,num;
    	for(int j=0;j<M;j++){
    		cin>>num;
	    	if(num==ans[j]) total+=score[j];
	    }
	    cout<<total<<endl;
    }
}