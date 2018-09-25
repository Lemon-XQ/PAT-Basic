#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
	string name;
	int height;
};

bool comp(student a,student b){
	if(a.height!=b.height) return a.height>b.height;
	return a.name<b.name;
}

int main(){
    int N,K;
    cin>>N>>K;
    vector<student> v(N);
    for(int i=0;i<N;i++){
    	cin>>v[i].name>>v[i].height;
    }
	sort(v.begin(),v.end(),comp);
	for(int i=0;i<K;i++){
	  int len=N/K;
	  int offset=N%K;
		if(i==0){// 第一排特殊处理 
		  offset=0;
		  len+=N%K;
		} 
		int index=len-1;
		// 假设一排有6人，下标分别为 5 3 1 0 2 4，中轴左右分别为-2和+2的规律 
		if(len%2!=0 && index>0) index--;// 中轴两边对称则最左边的下标为长度-2，否则-1（假设中轴下标为0） 
		for(int j=0;j<len;j++){
			int mid=len/2+1;			
			if(j<mid){
				cout<<v[len*i+index+offset].name;
				index-=2;
				if(index<0) index=0;
			}else{
				index+=2;
				cout<<v[len*i+index+offset].name;				
			}
			if(j!=len-1) cout<<" ";
			else cout<<endl;
		}
	}
}