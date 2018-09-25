#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    char c;
    cin>>c;
    string str;
    getchar();
    getline(cin,str);
    if(c=='C'){
		int len=1,i,j=0;
    	for(i=0;i<str.length()-1;i+=len){
    		while(str[i]==str[j] && j<str.length()) j++;
    		len=j-i;
    		if(len!=1) cout<<len;
    		cout<<str[i]; 
    	}
    	if(i==str.length()-1) cout<<str[i];
    }else if(c=='D'){
    	int len=1,j=0,offset=1;
		for(int i=0;i<str.length();i+=offset,j++){
			//cout<<str[i]<<endl;
			while(isdigit(str[j])) j++;
			if(j-i==0){
				offset=1;
				len=0;
				cout<<str[j];
			} 
			else{
				offset=j-i+1;
				len=atoi(str.substr(i,j-i).c_str());// 注意多个数字连在一起的情况 
				for(int k=0;k<len;k++) cout<<str[j];
			} 
		}
	}   
}