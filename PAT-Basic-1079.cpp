#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string str1,str2,str3;
	cin>>str2;
 	str1=str2;
 	reverse(str2.begin(),str2.end()); 
 	if(str1==str2){// 如果输入的数就是回文数就不用进行下面的操作了= = 
	 	cout<<str1<<" is a palindromic number."<<endl;
	 	return 0;
	}	
 	for(int i=0;i<10;i++){
 		int jinwei=0;
	 	cout<<str1<<" + "<<str2<<" = ";
	 	for(int j=str1.length()-1;j>=0;j--){
	 		int num=str1[j]-'0'+str2[j]-'0'+jinwei;
	 		jinwei=num/10;
 			str3.push_back(num%10+'0');
	 	}
	 	if(jinwei!=0) str3.push_back(jinwei+'0');
	 	string tmp=str3;
	 	reverse(str3.begin(),str3.end());
	 	cout<<str3<<endl;
	 	if(str3==tmp){
	 		cout<<str3<<" is a palindromic number."<<endl;
	 		return 0;
	 	}else{
	 		str1=str3;
	 		str2=tmp;
	 		str3="";
	 	}		
 	}
 	cout<<"Not found in 10 iterations."<<endl;
}