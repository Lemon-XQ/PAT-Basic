#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N,p;
    cin>>N>>p;
    //int* arr=new int[N];// ����p����ܳ�int��Χ���ĳ�double 
    double* arr=new double[N];
    for(int i=0;i<N;i++){
    	cin>>arr[i];
    }
    sort(arr,arr+N);// ���� 
    int len=0;
    // һ��ʼ����ǹ̶���β����βͬʱ�ƶ�3�����������������β��ͬ���ƶ������
	// ��ʵ��򵥵��Ǳ���˫��ѭ��ƥ�� 
    for(int i=0;i<N;i++){
    	for(int j=i+len;j<N;j++){// ��Ϊ�ҵ���������Գ�ֵ��i+len 
	    	if(arr[i]*p<arr[j]){	    	
		    	break;
		    }else{
	    		int temp=j-i+1;
	    		if(len<temp) len=j-i+1;
	    	}
	    }   	
    }
	cout<<len;
}