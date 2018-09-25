#include <iostream>

using namespace std;

int main(){
	int N;
	//int* arr=new int[N];
	int num;
	cin >> N;
	//for(int i=0;i<N;i++){
	//	cin>>arr[i];
	//}
	int A1=0,A2=0,A3=0,A5=0,A4=0;
	int sign=1,count=0;
	bool flag=false;
	for(int i=0;i<N;i++){
		cin>>num;
		if(num%5==0 && num%2==0)
			A1+=num;
		if(num%5==1){
			A2+=sign*num;
			sign=-sign; 
			flag=true;
		}
		if(num%5==2)	
			A3++;
		if(num%5==3){
			A4+=num;
			count++;
		}		
		if(num%5==4 && num>A5){
			A5=num;
		}
	}
	if(A1==0) cout<<'N'<<" ";
	else cout<<A1<<" ";
	if(flag==false) cout<<'N'<<" ";
	else cout<<A2<<" ";
	if(A3==0) cout<<'N'<<" ";
	else cout<<A3<<" ";
	if(A4==0) cout<<'N'<<" ";
	else printf("%.1f ",(float)A4/count);
	if(A5==0) cout<<'N';
	else cout<<A5;
} 