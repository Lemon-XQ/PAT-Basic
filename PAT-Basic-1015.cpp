#include <iostream>
#include <map>

using namespace std;

int main(){
    int N,K;
    int first;
    cin>>first>>N>>K;
    int data[100000],next[100000],arr[100000];
    for(int i=0;i<N;i++){
    	int j;
    	cin>>j;
		cin>>data[j]>>next[j];
    }
    // 可能会有无效节点，需要重新确定有效节点数 
    //for(int i=0;i<N;i++){
    //	arr[i]=first;
    //	first=next[first];
    //}
    N=0;
    while(first!=-1){
        arr[N++]=first;
        first=next[first];
    }
    int len=N/K;
    for(int i=0;i<len;i++){
    	reverse(arr+i*K,arr+i*K+K);
    }
    for(int i=0;i<N-1;i++){
    	printf("%05d %d %05d\n",arr[i],data[arr[i]],arr[i+1]);
    }
    printf("%05d %d %d",arr[N-1],data[arr[N-1]],-1);
    /*node* n=new node[N];
    node* head=NULL;
    map<string,node> m;
    
    for(int i=0;i<N;i++){
    	cin>>n[i].address>>n[i].data>>n[i].next_addr;
    	if(n[i].address==address){// 头节点 
	    	head=&n[i];
	    } 
    	if(n[i].next_addr=="-1"){// 尾节点 	
	    	n[i].next=NULL;
	    } 
    	m[n[i].address]=n[i];
    }
    // 形成链表 
    for(int i=0;i<N;i++){
    	n[i].next=&m[n[i].next_addr];
    }
    node* cur=head;
    while(cur->next!=NULL){
    	cur=cur->next;
    }*/
}