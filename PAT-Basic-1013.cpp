#include <iostream>

using namespace std;

int main(){
    int* arr=new int[50];
    int k;
    bool flag=false;
    for(int i=0;i<10;i++){
    	cin>>arr[i];
		if(!flag && arr[i]!=0 && i!=0){// �ҳ���0������С���� 
			k=i;
			flag=true;
		}
    }
    if(arr[0]!=0){// ����0���ӡ��0����С������Ϊ��λ 
    	cout<<k;
    	arr[k]--;
    }
    for(int i=0;i<50;i++){
    	for(int j=0;j<arr[i];j++){
			cout<<i;
	    }
    }
}