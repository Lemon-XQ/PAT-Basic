#include <iostream>
#include <sstream>

using namespace std;

int main(){ 
    string str;
	int N;
    cin>>str>>N;  
	if(N==1){
		cout<<str<<endl;  
		return 0;
	} 
    for(int n=1;n<N;n++){
    	string str_after="";
    	int len=1,i,j=0;
    	for(i=0;i<str.length()-1;i+=len){
    		while(str[i]==str[j] && j<str.length()) j++;
    		len=j-i;
    		stringstream ss;
    		ss<<len;
			str_after.push_back(str[i]); 
    		str_after+=ss.str();   		
    	}
    	if(i==str.length()-1){// 说明最后一个字符是独立的 
	    	str_after.push_back(str[i]);   	
	    	str_after.push_back('1');
	    } 
		str=str_after;
    }
    cout<<str<<endl;
}