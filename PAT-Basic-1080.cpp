#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct student{
	string name;
	int GP;
	int GM;
	int GF;
	int G;
	student(){
		GP=-1; GM=-1; GF=-1; G=-1;
	}
};

bool comp(student a,student b){
	if(a.G==b.G) return a.name<b.name;
	return a.G>b.G;
}

int main(){// 利用map根据名字做索引，利用vector进行排序 
    int P,M,N;
    cin>>P>>M>>N;
    map<string,student> m;
    string name;
   	int score;
    for(int i=0;i<P;i++){    	
    	cin>>name>>score;
    	m[name].GP=score;
    }
    for(int i=0;i<M;i++){
    	cin>>name>>score;
    	m[name].GM=score;
    }
    for(int i=0;i<N;i++){
    	cin>>name>>score;
    	m[name].GF=score;
    }
    vector<student> v;
    for(map<string,student>::iterator iter=m.begin();iter!=m.end();iter++){
    	student s=iter->second;
    	int GP=0,GM=0,GF=0,G;
    	GP=(s.GP==-1)?0:s.GP;
    	GM=(s.GM==-1)?0:s.GM;
    	GF=(s.GF==-1)?0:s.GF;
    	if(GP<200) continue;
    	if(GM>GF) G=0.4*GM+0.6*GF+0.5;    	
    	else G=GF;
		if(G>100) G=100; // 最多100分 
    	if(G>=60){
	    	s.name=iter->first;
	    	s.G=G;
	    	v.push_back(s);
	    }
    }
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<v.size();i++){
    	cout<<v[i].name<<" "<<v[i].GP<<" "<<v[i].GM<<" "<<v[i].GF<<" "<<v[i].G<<endl;
    }
}