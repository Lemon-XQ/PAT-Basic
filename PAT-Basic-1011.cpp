#include <iostream>

using namespace std;

int main(){
    string N;
    cin>>N; 
    int arr[10]={0};
    for(int i=0;i<N.length();i++){
    	arr[N[i]-'0']++;
    }
    for(int i=0;i<10;i++){
    	if(arr[i]!=0) cout<<i<<":"<<arr[i]<<endl;
    }
}