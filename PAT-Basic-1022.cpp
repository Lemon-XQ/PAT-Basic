#include <iostream>
#include <map>

using namespace std;

int main(){
    int N;
    cin>>N;
    //int* arr=new int[N];// 内存溢出，改为用map动态分配内存 
    map<int,int> m;
    for(int i=0;i<N;i++){
    	int num,score;
    	cin>>num>>score;
    	m[num]+=score;
    }
    map<int,int>::iterator iter=m.begin();
    int high=0,index=0;
    for(iter=m.begin();iter!=m.end();iter++){
    	if(iter->second>high){
   	 		high=iter->second;
			index=iter->first;	
	    } 
    }
    cout<<index<<" "<<high<<endl;
}