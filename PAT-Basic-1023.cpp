#include <iostream>

using namespace std;

int main(){
    string key,str;
    getline(cin,key);
    getline(cin,str);
    //cin>>key>>str; // 不能用cin，可能没有坏键，第一行为空行。。。 
    bool flag=false;
    bool upper=true;
    for(int i=0;i<key.length();i++){
    	if(key[i]=='+'){
	    	upper=false;
	    	break;
	    }
    }
    for(int i=0;i<str.length();i++){
    	flag=false;
    	for(int j=0;j<key.length();j++){
    		// 1.上档键坏掉时不能打印大写字母
			// 2.字符出现在坏键里
			// 3.大小写都不能打  
	    	if(!upper && isupper(str[i]) || str[i]==key[j] || str[i]==tolower(key[j])) {
	    		flag=true;
	    		break;
	    	}
    	}
    	if(!flag) cout<<str[i];
    }
    cout<<endl;
}