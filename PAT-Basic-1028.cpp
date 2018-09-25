#include <iostream>

using namespace std;

int main(){
    int N,K;
    //cin>>N;
    scanf("%d",&N);
    int arr[100]={0};
    int score;
    for(int i=0;i<N;i++){
    	//cin>>score;
    	scanf("%d",&score);
    	arr[score]++;
    }
    scanf("%d",&K);
    //cin>>K;
    for(int i=0;i<K-1;i++){
    	cin>>score;
    	cout<<arr[score]<<" ";
    }
    cin>>score;
    cout<<arr[score];
}