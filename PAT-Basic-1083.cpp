#include <iostream>

using namespace std;

int main(){ 
    int N;
	cin>>N;
	int arr[10001]={0};
	for(int i=1;i<=N;i++){
		int num;
		cin>>num;
		arr[abs(i-num)]++;
	}
	for(int i=10000;i>=0;i--){
		if(arr[i]>1){
			cout<<i<<" "<<arr[i]<<endl;
		}
	}
}