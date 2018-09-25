#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    long long p=0,pa=0,pat=0;// 不用long long的话每一步都要mod
	// 动态规划 
    for(int i=0;i<str.length();i++){
    	if(str[i]=='P') p++;
        else if(str[i]=='A') pa+=p;
	    else pat+=pa;
    }
    cout<<pat%1000000007<<endl;
}