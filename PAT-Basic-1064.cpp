#include <iostream>
#include <set>

using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[46]={0},num=0;
    set<int> s;
    for(int i=0;i<N;i++){
    	num=0;
    	string str;
    	cin>>str;
    	for(int j=0;j<str.length();j++) num+=str[j]-'0';
    	arr[num]++;
    	s.insert(num);
    }
    cout<<s.size()<<endl;
    bool flag=false;
    for(int i=0;i<46;i++){
    	if(arr[i]>0){
    		if(flag) cout<<" ";
	    	cout<<i;
			flag=true;
	    }    	   	
    }
}