#include <iostream>
#include <algorithm>

using namespace std;

char mapping[11]={'1','0','X','9','8','7','6','5','4','3','2'};
int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

bool isValid(string str){
	int sum=0;
	for(int i=0;i<str.length()-1;i++){
		if(!isdigit(str[i])) return false;
		sum+=weight[i]*(str[i]-'0');
	}
	int Z=sum%11;
	if(str[str.length()-1]!=mapping[Z]) return false;
	return true;
}

int main(){
    int N;
    cin>>N;
    int count=0;
    for(int i=0;i<N;i++){
    	string str;
    	cin>>str;
    	if(isValid(str)) count++;
    	else cout<<str<<endl;
    }
    if(count==N) cout<<"All passed"<<endl;    
}