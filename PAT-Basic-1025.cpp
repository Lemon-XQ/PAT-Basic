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
    // �ж��Ƿ��ǲ����������ҵ�����������һ��������������±꣬
	// �����λ�õ���һ��λ�ÿ�ʼ����ԭ���飬����벿��ȫ������������ȫ��ͬ����Ϊ�������� 
    for (i=0; i<N-1 && mid[i]<=mid[i+1];i++);
    for (j=i+1;arr[j]==mid[j] && j<N; j++);
    
    if(j==N){
    	cout<<"Insertion Sort"<<endl;
		sort(arr,arr+i+2);	
    } 
    else{
    	cout<<"Merge Sort"<<endl;
		int len=1, flag=1;
		// ��ԭ������й鲢��ֱ��������� 
        while(flag) {
            flag=0;  
            for(i=0;i<N;i++) {
                if (arr[i]!=mid[i])
                    flag=1;
            }
            len*=2;
            for(i=0;i<N/len;i++)
                sort(arr+i*len, arr+(i+1)*len);// ÿһ���ڲ����� 
            sort(arr+N/len*len, arr+N);// ʣ�µĲ��� 
        }	
    } 
    for(int i=0;i<N-1;i++){
    	cout<<arr[i]<<" ";
    }
    cout<<arr[N-1]<<endl;
}