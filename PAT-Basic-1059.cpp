#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

bool isPrime(int num){
	for(int i=2;i*i<=num;i++){
		if(num%i==0) return false;
	}
	return true;
}

int main(){
    int N;
    cin>>N;
    int arr[9999]={0},checked[9999]={0};
    for(int i=0;i<N;i++){
    	int num;
    	cin>>num;
    	arr[num]=i+1;
    }
    int K;
    cin>>K;   
    for(int i=0;i<K;i++){
    	int num;
    	cin>>num;		
    	cout<<setw(4)<<setfill('0')<<num<<": ";    	
    	if(arr[num]==0) cout<<"Are you kidding?"<<endl;
    	else if(checked[num]==1) cout<<"Checked"<<endl;
		else if(arr[num]==1) cout<<"Mystery Award"<<endl;
    	else if(isPrime(arr[num])) cout<<"Minion"<<endl;
    	else cout<<"Chocolate"<<endl;
    	checked[num]=1;
    }
}