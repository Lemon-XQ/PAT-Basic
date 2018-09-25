#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

string mar_num[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string mar_high[13]={"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};

int find_earth_num(string mar){
	for(int i=0;i<13;i++){
		if(mar_num[i]==mar) return i;
	}
	return -1; 
}

int find_earth_high(string mar){
	for(int i=0;i<13;i++){
		if(mar_high[i]==mar) return i;
	}
	return -1;
}

int toEarth(string str){
	int num=0;
	int low,high;
	int index=str.find(' ');
	if(index!=-1){
		high=find_earth_high(str.substr(0,index));
		low=find_earth_num(str.substr(index+1,str.length()-index-1));
		num=13*high+low;
	}else{
		num=find_earth_num(str);	
		if(num==-1){// 10的倍数只输出高位 
			num=13*find_earth_high(str);
		}
	}
	return num;
}

string toMar(int num){
	vector<string> v;
	if(num%13==0) return mar_high[num/13];
	if(num/13==0) return mar_num[num%13];
	v.push_back(mar_num[num%13]);
	num=num/13;
	while(num!=0){
		v.push_back(mar_high[num%13]);
		num=num/13;
	}
	if(num%13!=0) v.push_back(mar_high[num%13]);
	reverse(v.begin(),v.end());
	string str="";
	for(int i=0;i<v.size()-1;i++){
		str+=v[i]+" ";
	}
	str+=v[v.size()-1];// 行末不能有空格
	return str;
}

int main(){
    int N;
    cin>>N;
    getchar();// 消除回车对getline影响 
    for(int i=0;i<N;i++){
    	string str;
    	getline(cin,str);
    	if(isalpha(str[0])) cout<<toEarth(str)<<endl;
    	else cout<<toMar(atoi(str.c_str()))<<endl;
    }
}