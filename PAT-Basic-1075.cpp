#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int head,N,K;
	cin>>head>>N>>K;
	int arr[100000]={0},data[100000]={0},next[100000]={0};
 	for(int i=0;i<N;i++){
	 	int num;
	 	cin>>num;
 		cin>>data[num]>>next[num];
 	}
 	// form the list
 	int i=0,len=0;
    while(head!=-1){
        arr[i++]=head;
        head=next[head];
        len++;// 注意可能存在无效节点 
    }
    vector<int> v;
    for(int i=0;i<len;i++){
    	if(data[arr[i]]<0){
    		v.push_back(arr[i]);
	    }
    }
    for(int i=0;i<len;i++){
    	if(data[arr[i]]>=0 && data[arr[i]]<=K){
    		v.push_back(arr[i]);
    	}
    }
    for(int i=0;i<len;i++){
    	if(data[arr[i]]>K){
	    	v.push_back(arr[i]);
	    }
    }
    for(i=0;i<v.size()-1;i++){
	    printf("%05d %d %05d\n",v[i],data[v[i]],v[i+1]);
    }
    if(v.size()!=0) printf("%05d %d -1",v[i],data[v[i]]);
}