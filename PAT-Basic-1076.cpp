#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int N;
    cin>>N;
    string pwd="";
    for(int i=0;i<N;i++){
    	string str1,str2,str3,str4;
    	cin>>str1>>str2>>str3>>str4;
    	if(str1[2]=='T') pwd.push_back(str1[0]-'A'+'1');
    	if(str2[2]=='T') pwd.push_back(str2[0]-'A'+'1');
    	if(str3[2]=='T') pwd.push_back(str3[0]-'A'+'1');
    	if(str4[2]=='T') pwd.push_back(str4[0]-'A'+'1');
    }
    cout<<pwd<<endl;
}