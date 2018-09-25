#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
	set<int> s;
	for(int i=1;i<=N;i++){
		s.insert(i/2+i/3+i/5);
	}
	cout<<s.size()<<endl;
	return 0;
}
