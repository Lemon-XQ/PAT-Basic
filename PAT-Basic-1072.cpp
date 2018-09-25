#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int arr[10000]={0};
    for(int i=0;i<M;i++){
    	int num;
    	cin>>num;
    	arr[num]=1;
    }
    int count_stu=0,count_thing=0;
    for(int i=0;i<N;i++){
    	bool flag=false;
    	string name;
    	cin>>name;
    	int K;
    	cin>>K;
    	for(int j=0;j<K;j++){
	    	int num;
			cin>>num;
			if(arr[num]==1){
				count_thing++;
				if(!flag) cout<<name<<": "<<setw(4)<<setfill('0')<<num;
				else cout<<" "<<setw(4)<<setfill('0')<<num;
				flag=true;
			}
	    }
	    if(flag){
    		count_stu++;
    		cout<<endl;
    	}
    }
    cout<<count_stu<<" "<<count_thing<<endl;
}