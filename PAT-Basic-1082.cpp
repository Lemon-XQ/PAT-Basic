#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct people{
	string name;
	int distance;
};

bool comp(people a,people b){
	return a.distance<b.distance;
}

int main(){ 
    int N;
	cin>>N;
	vector<people> v;
	for(int i=0;i<N;i++){
		string name;
		int x,y;
		cin>>name>>x>>y;
		people p;
		p.name=name;
		p.distance=abs(x)+abs(y);
		v.push_back(p);
	}
	sort(v.begin(),v.end(),comp);
	cout<<v[0].name<<" "<<v[N-1].name<<endl;
}