#include <iostream>

using namespace std;

int main(){ 
    int N;
	cin>>N;
	getchar();
	for(int i=0;i<N;i++){
		string pwd;
		getline(cin,pwd);
		if(pwd.length()<6) cout<<"Your password is tai duan le."<<endl;
		else{
			bool hasNum=false,hasAlpha=false,valid=true;
			for(int j=0;j<pwd.length();j++){
				if(!isdigit(pwd[j]) && !isalpha(pwd[j]) && pwd[j]!='.') valid=false;
				if(isdigit(pwd[j])) hasNum=true;
				if(isalpha(pwd[j])) hasAlpha=true;
			}
			if(!valid) cout<<"Your password is tai luan le."<<endl;
			if(hasNum && !hasAlpha) cout<<"Your password needs zi mu."<<endl;
			else if(hasAlpha && !hasNum) cout<<"Your password needs shu zi."<<endl;
			if(valid && hasNum && hasAlpha) cout<<"Your password is wan mei."<<endl;
		}
	}
}