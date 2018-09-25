#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
    	cin>>arr[i];
    }
    sort(arr,arr+N,less<int>());
    double len=0;
    for(int i=0;i<N-1;i++){
    	len=(arr[i]+arr[i+1])/2.0;
    	arr[i]=0;
    	arr[i+1]=len;
    }
    cout<<(int)len<<endl;
}