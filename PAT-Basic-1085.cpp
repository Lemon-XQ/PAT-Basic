#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct school{
	string name;
	int count;
	double score;
	school(){
		count=0;
		score=0;
	}
};

void toLower(string& str){
	for(int i=0;i<str.length();i++) str[i]=tolower(str[i]);
}

bool comp(school a,school b){
	if((int)a.score==(int)b.score){
		if(a.count==b.count) return a.name<b.name;
		return a.count<b.count;
	}
	return a.score>b.score;
}

int main(){ 
	int N;
    cin>>N;  
    map<string,school> m;
	for(int i=0;i<N;i++){
		string str,str2;
		int score;
		cin>>str>>score>>str2;
		toLower(str2);
		m[str2].name=str2;
		m[str2].count++;
		if(str[0]=='B') m[str2].score+=score/1.5;
		else if(str[0]=='A') m[str2].score+=score;
		else if(str[0]=='T') m[str2].score+=score*1.5;
	}
	vector<school> v;
	for(map<string,school>::iterator it=m.begin();it!=m.end();it++){
		v.push_back(it->second);
	}
	sort(v.begin(),v.end(),comp);
	int rank=1,count=0;
	int score=(int)v[0].score;
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){		
		if((int)v[i].score!=score){
			rank+=count;
			count=1;
		} 
		else count++;
		cout<<rank<<" "<<v[i].name<<" "<<(int)v[i].score<<" "<<v[i].count<<endl;
		score=(int)v[i].score;
	}
}