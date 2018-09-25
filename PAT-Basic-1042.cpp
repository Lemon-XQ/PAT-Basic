#include <iostream>
#include <algorithm> 

using namespace std;

bool comp(char a,char b){
	return tolower(a)>tolower(b);
}

int main(){
    string str;
    getline(cin,str);
    sort(str.begin(),str.end(),comp);
    for(int i=0;i<str.length();i++) str[i]=tolower(str[i]);// 全部转为小写 
    int count=0,len=1;
    char c='z'+1;
    for(int i=0;i<str.length();i+=len){
    	if(isalpha(str[i])){
		    len=str.find_last_of(str[i])-str.find(str[i])+1;
	    	if(len>count || len==count && tolower(str[i])<c){// 并列输出字母序更小的 
		    	count=len;
				c=tolower(str[i]);	
		    } 	
	    }  	
    }
    cout<<c<<" "<<count<<endl;
}