#include <iostream>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    int N=0;
    for(int i=0;i<str.length();i++){
    	char c=tolower(str[i]);
    	if(c-'a'>=0 && c-'z'<=0) N+=c-'a'+1;
    }
    int count0=0,count1=0;
    while(N>0){
    	if(N%2==0) count0++;
    	else count1++;
    	N=N/2;
    }
    cout<<count0<<" "<<count1<<endl;
}