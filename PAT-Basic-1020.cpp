#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N,p;
    cin>>N>>p;
    //int* arr=new int[N];// 乘以p后可能超int范围，改成double 
    double* arr=new double[N];
    for(int i=0;i<N;i++){
    	cin>>arr[i];
    }
    sort(arr,arr+N);// 升序 
    int len=0;
    // 一开始想的是固定首尾和首尾同时移动3种情况，但忽略了首尾不同步移动的情况
	// 其实最简单的是暴力双重循环匹配 
    for(int i=0;i<N;i++){
    	for(int j=i+len;j<N;j++){// 因为找的是最长，所以初值是i+len 
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