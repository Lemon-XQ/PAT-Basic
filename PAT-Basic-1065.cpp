#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int N;
    cin>>N;
    int pairs[100000]={-1};
    for(int i=0;i<N;i++){
    	int num1,num2;
    	cin>>num1>>num2;
    	pairs[num1]=num2;
    	pairs[num2]=num1;
    }
    int M;
    cin>>M;
    vector<int> v,ans;
    for(int i=0;i<M;i++){
    	int num;
    	cin>>num;
    	v.push_back(num);
    }
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++){
		bool flag=false;
		int num=v[i];
		if(pairs[num]==-1){// 单身 
			ans.push_back(num);
		}else{// 非单身但是伴侣不在 
			for(int j=0;j<v.size();j++){
				if(v[j]==pairs[num]){
					flag=true;
					break;
				} 
			}
			if(!flag){
				ans.push_back(num);
			} 
		}
	}
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<setw(5)<<setfill('0')<<ans[i];
		if(i!=ans.size()-1) cout<<" ";
	}
}