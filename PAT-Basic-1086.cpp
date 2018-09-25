#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	int a,b,res;
	cin>>a>>b;
	res=a*b;
	stringstream ss;
	ss<<res;
	string str=ss.str();
	reverse(str.begin(),str.end());
	cout<<atoi(str.c_str())<<endl;
	return 0;
}
