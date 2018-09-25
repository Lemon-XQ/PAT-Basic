#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    set<int> s;
    for(int i=0;i<N;i++){
    	int num;
    	cin>>num;
    	s.insert(num);
    }
    int sum=0;
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
    	for(set<int>::iterator it2=s.begin();it2!=s.end();it2++){
    		if(it!=it2) sum+=(*it)*10+(*it2);
    	}
    }
    cout<<sum<<endl;
}