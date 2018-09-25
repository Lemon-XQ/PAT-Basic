#include <iostream>

using namespace std;

int main(){
    string A;
    cin>>A;
    if(A[0]=='-') cout<<A[0];// 输出符号 
    int pow;
	string num_str;
	char sign;
    for(int i=0;i<A.length();i++){
    	if(A[i]=='E'){
    		sign=A[i+1];
    		num_str=A.substr(1,i-1);
	    	pow=atoi(A.substr(i+2,A.length()-i-2).c_str());
	    	break;
	    }
    }
    if(sign=='-'){
    	if(pow==0) cout<<num_str;// 注意特殊情况 
		else{
			cout<<"0.";
	    	for(int i=0;i<pow-1;i++){
		    	cout<<"0";
		    }
		    for(int i=0;i<num_str.length();i++){
	    		if(num_str[i]!='.') cout<<num_str[i];
	    	}
		}     
    }else{
    	if(num_str.length()>=pow+2){
	    	for(int i=0;i<pow+2;i++){
    			if(num_str[i]!='.') cout<<num_str[i];
    		}
	    }else{
    		for(int i=0;i<num_str.length();i++){
    			if(num_str[i]!='.') cout<<num_str[i];
    		}
    		for(int i=0;i<pow+2-num_str.length();i++){
    			cout<<"0";
    		}
    	}
    	if(num_str.length()-1>=pow+2) cout<<'.';
    	for(int i=pow+2;i<num_str.length();i++){
	    	cout<<num_str[i];
	    }
    }
}