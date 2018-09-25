#include <iostream>
#include <algorithm> 

using namespace std;

string crypt(string A,string B){
	// 因为要加密的是A，如果A比B长，要补齐B 
	if(A.length()>B.length()){
		B.insert(0,A.length()-B.length(),'0');
	}	
	for(int i=1;i<=A.length();i++){
		int j=B.length()-i,k=A.length()-i,num;
		if(i%2!=0){
			num=((B[j]-'0')+(A[k]-'0'))%13;
		}else{
			num=B[j]-A[k];
			if(num<0) num+=10;
		}
		if(num==10) B[j]='J';
		else if(num==11) B[j]='Q';
		else if(num==12) B[j]='K';
		else B[j]=num+'0';
	}
	return B;
}

int main(){
    string A,B;
    cin>>A>>B;
    cout<<crypt(A,B)<<endl;
}