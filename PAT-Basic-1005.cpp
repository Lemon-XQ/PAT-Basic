#include <iostream>
#include <algorithm>

using namespace std;

struct student{
	int stunum;
	int de,cai;
	int kind;// 成绩分类，方便排序 
};

int H;
bool comp(student a,student b){
	if(a.kind!=b.kind) return a.kind<b.kind;// 类别优先 
	if(a.de+a.cai>b.de+b.cai) return true;
	else if(a.de+a.cai==b.de+b.cai){
		if(a.de>b.de) return true;// 德才总分相同按德排序 
		else if(a.de==b.de) return a.stunum<b.stunum;// 德相同按学号排序 
	}
	return false;
}

int main(){
	int N,L;
	scanf("%d %d %d",&N,&L,&H);
	//cin>>N>>L>>H; // 超时……所有cin,cout都换掉。。 
	student* s=new student[N];
	int count=0,j=0;
	for(int i=0;i<N;i++){
		scanf("%d %d %d",&s[j].stunum,&s[j].de,&s[j].cai);
		//cin>>s[j].stunum>>s[j].de>>s[j].cai;
		if(s[j].de>=L && s[j].cai>=L){
			if(s[j].de>=H && s[j].cai>=H) s[j].kind=1;
			else if(s[j].de>=H && s[j].cai<H) s[j].kind=2;
			else if(s[j].de<H && s[j].cai<H && s[j].de>=s[j].cai) s[j].kind=3;
			else s[j].kind=4;
			count++; 
			j++;// 只记录符合大于等于L标准的 
		}
	}
	sort(s,s+count,comp);
	printf("%d\n",count);
	//cout<<count<<endl;
	for(int i=0;i<count;i++){
		printf("%d %d %d\n",s[i].stunum,s[i].de,s[i].cai);
		//cout<<s[i].stunum<<" "<<s[i].de<<" "<<s[i].cai<<endl;
	}
} 
/*
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
	int stunum;
	int de,cai;
	int kind;
	student(int s,int d,int c,int k){
	  stunum=s; de=d; cai=c; kind=k;
	}
};

bool comp(student a,student b){
  if(a.kind!=b.kind) return a.kind<b.kind;
  if(a.de+a.cai==b.cai+b.de){
    if(a.de==b.de) return a.stunum<b.stunum;
    return a.de>b.de;
  }
	return a.de+a.cai>b.cai+b.de;
}

int main(){
	int H,N,L;
	scanf("%d %d %d",&N,&L,&H);
	//cin>>N>>L>>H;
	vector<student> v;
	int count=0,j=0;
	for(int i=0;i<N;i++){
	  int stunum;
	  int de,cai;
	  //cin>>stunum;
	  scanf("%d %d %d",&stunum,&de,&cai);
	  //cin>>stunum>>de>>cai;
		if(de>=L && cai>=L){
		  count++;
		  if(de>=H && cai>=H) v.push_back(student(stunum,de,cai,1));
			else if(de>=H && cai<H) v.push_back(student(stunum,de,cai,2));
			else if(de<H && cai<H && de>=cai) v.push_back(student(stunum,de,cai,3));
			else v.push_back(student(stunum,de,cai,4));
		}
	}
	sort(v.begin(),v.end(),comp);
	cout<<count<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i].stunum<<" "<<v[i].de<<" "<<v[i].cai<<endl;
	}
} 
*/