#include <iostream>

using namespace std;

int main(){
    string pwd;
    int N;
    cin>>pwd>>N;
    int count=0;
    getchar();
    while(1){
    	string str;
    	getline(cin,str);// 可能含有空格 
    	if(str=="#") break;
		if(str==pwd && count<N){
			cout<<"Welcome in"<<endl;
			break;
		}
		if(str!=pwd){
			cout<<"Wrong password: "<<str<<endl;
			count++;
			if(count==N){
				cout<<"Account locked"<<endl;
				break;
			}
		}
    }
}