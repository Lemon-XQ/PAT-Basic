#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> v;
    for(int i=0;i<N;i++){
    	int num;
    	cin>>num;
    	v.push_back(num);
    }
    sort(v.begin(),v.end(),greater<int>());
	int E;
	// ע��E�ĳ�ʼֵ 
	if(N>=v[0]) E=v[0]-1;
	else E=N;
	int count=0,i;
    for(i=0;i<N;i++){
    	if(v[i]>E) count++;
    	else{
    		if(count>=E){
		    	cout<<E<<endl;
		    	return 0;
		    }
	    	E--;	    	
	    	count=0;
	    	i=-1;// ��ͷ��ʼ 
	    }
    }
    // ע��ֻ��һ��Ԫ�غ��Ҳ���ʱ�Ĵ��� 
    if(i==N) cout<<E<<endl;
    else cout<<0<<endl;
}