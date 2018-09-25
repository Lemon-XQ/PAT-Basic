#include <iostream>

using namespace std;

bool isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	int M,N;
	cin >> M >> N;
	int num=2,k=0;
	int* arr=new int[N-M+1];
	for(int i=0;i<N;num++){
		if(isPrime(num)){
			i++;
			if(i>=M) arr[k++]=num;	
		} 	
	}
	int i,j;
	for(i=0;i<(N-M+1)/10;i++){
		for(j=0;j<9;j++){
			cout<<arr[i*10+j]<<" ";
		}
		cout<<arr[i*10+j]<<endl;
	}
	for(i=0;i<(N-M+1)%10-1;i++){
		cout<<arr[((N-M+1)/10)*10+i]<<" ";
	}
	cout<<arr[((N-M+1)/10)*10+i];
} 