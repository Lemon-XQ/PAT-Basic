#include <iostream>
#include <vector>

using namespace std;

void fill(vector<string>& v){
	string str;
	int index=0,index2;
	getline(cin,str); 
    while((index=str.find(' ',index)) != string::npos) str.erase(index,1);// 去除空格 
    index=0;
    while((index=str.find('[',index)) != string::npos){// 匹配[] 
    	index2=str.find(']',index);
    	string s=str.substr(index+1,index2-index-1);
    	v.push_back(s);
    	index=index2;
    }
}

int main(){
    string str;
    vector<string> hand,eye,mouth;
    fill(hand);
    fill(eye);
    fill(mouth);
	int K;
	cin>>K;		
	for(int i=0;i<K;i++){
		string emotion="";
		int h1,e1,m,e2,h2;
		cin>>h1>>e1>>m>>e2>>h2;
		if(h1>hand.size() || h2>hand.size() || e1>eye.size() || e2>eye.size() || m>mouth.size()
		  || h1<1 || h2<1 || e1<1 || e2<1 || m<1){// 注意下界.. 
			cout<<"Are you kidding me? @\\/@"<<endl;// 注意转义
		}else{
			emotion+=hand[h1-1];
			emotion+="(";
			emotion+=eye[e1-1];
			emotion+=mouth[m-1];
			emotion+=eye[e2-1];
			emotion+=")";
			emotion+=hand[h2-1];
			cout<<emotion<<endl;
		}		
	} 
}