#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    int* arr=new int[N];
    int* mid=new int[N];
    for(int i=0;i<N;i++){
    	cin>>arr[i];
    }
    for(int i=0;i<N;i++){
    	cin>>mid[i];
    }
    int i,j;
    // 判断是否是插入排序：先找到排序后数组第一个不符合升序的下标，
	// 从这个位置的下一个位置开始遍历原数组，若后半部分全部两个数组完全相同，则为插入排序 
    for (i=0; i<N-1 && mid[i]<=mid[i+1];i++);
    for (j=i+1;arr[j]==mid[j] && j<N; j++);
    
    if(j==N){
    	cout<<"Insertion Sort"<<endl;
		sort(arr,arr+i+2);	
    } 
    else{
    	cout<<"Merge Sort"<<endl;
		int len=1, flag=1;
		// 对原数组进行归并，直至二者相等 
        while(flag) {
            flag=0;  
            for(i=0;i<N;i++) {
                if (arr[i]!=mid[i])
                    flag=1;
            }
            len*=2;
            for(i=0;i<N/len;i++)
                sort(arr+i*len, arr+(i+1)*len);// 每一组内部排序 
            sort(arr+N/len*len, arr+N);// 剩下的部分 
        }	
    } 
    for(int i=0;i<N-1;i++){
    	cout<<arr[i]<<" ";
    }
    cout<<arr[N-1]<<endl;
}