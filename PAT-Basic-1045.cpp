#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N],b[N];
    for(int i=0;i<N;i++){
    	cin>>a[i];
    	b[i]=a[i];
    }
    sort(b,b+N);
    int count=0;
    vector<int> v;
    int max=0;
    //  ����ǰԪ��û�б仯��������ߵ�����ֵ�����ֵ������Сʱһ������Ԫ
    for(int i=0;i<N;i++){
    	if(a[i]>max) max=a[i];
    	if(a[i]==b[i] && a[i]>=max){
	    	v.push_back(a[i]);
	    	count++;
	    }
    }
    // ���µķ����ᳬʱ 
    /*for(int i=0;i<N;i++){  	
		bool flag1=true,flag2=true;
    	for(int j=0;j<i;j++){
	    	if(arr[j]>arr[i]){
	    		flag1=false;
				break;
	    	}
	    }
    	for(int j=i+1;j<N;j++){
	    	if(arr[j]<arr[i]){
	    		flag2=false;
	    		break;
	    	}
	    }		
	    if(flag1 && flag2){
    		v.push_back(arr[i]);
    		count++;	
    	} 
    }
    sort(v.begin(),v.end());*/
    cout<<count<<endl;
    for(int i=0;i<count-1;i++){
    	cout<<v[i]<<" ";
    }
    if(count>0) cout<<v[count-1];
    cout<<endl;// û����Ԫʱ������� 
}