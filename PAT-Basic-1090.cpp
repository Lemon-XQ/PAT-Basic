#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int MAXV=100001;
vector<int> m[MAXV];// 存储每个物品对应的危险物品列表

int main(){
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N;i++){
		int a,b;
		cin>>a>>b;
		m[a].push_back(b);
		m[b].push_back(a);
	}
	for(int i=0;i<M;i++){
		int K;
		cin>>K;
		int arr[K];
		bool flag=true;
		for(int j=0;j<K;j++){
			cin>>arr[j];
		}
		for(int j=0;j<K-1;j++){
			for(int k=j+1;k<K;k++){
//				if(!flag) break;
				if(find(m[arr[j]].begin(),m[arr[j]].end(),arr[k])!=m[arr[j]].end()){
					flag=false;
					break;
				}
			}
			if(!flag)break;
		}
		if(flag) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
