#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
    	int total=0;
    	vector<int> v;
    	for(int j=0;j<N;j++){
    		int score;
	    	cin>>score;
	    	if(score>=0 && score<=M) v.push_back(score);
	    }
	    sort(v.begin()+1,v.end());
	    int G1=0,G2=v[0];
	    for(int i=2;i<v.size()-1;i++) G1+=v[i];
	    int count=v.size()-3;
	    total=(G1*1.0/count+G2)/2.0+0.5;
	    cout<<total<<endl;
    }
}