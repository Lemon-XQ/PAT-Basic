#include <iostream>
#include <algorithm>

using namespace std;

struct people{
	string name;
	int year;
	int month;
	int day;
};

bool comp(people a,people b){
	if(a.year!=b.year) return a.year>b.year;
	if(a.month!=b.month) return a.month>b.month;
	return a.day>b.day;
}

bool isValid(people a){
	if(a.year<1814 || a.year==1814&&a.month<9 || a.year==1814&&a.month==9&&a.day<6
	   || a.year>2014 || a.year==2014&&a.month>9 || a.year==2014&&a.month==9&&a.day>6) return false;
	return true;
}

int main(){
    int N;
    cin>>N;
    people* p=new people[2];
    p[0].year=2014;p[0].month=9;p[0].day=6;
    p[1].year=1814;p[1].month=9;p[1].day=6;
    int count=0;
    //string old_name,young_name;
    for(int i=0;i<N;i++){
    	string str;
    	people tmp;
    	cin>>tmp.name>>str;
    	tmp.year=atoi(str.substr(0,4).c_str());
    	tmp.month=atoi(str.substr(5,2).c_str());
    	tmp.day=atoi(str.substr(8,2).c_str());
    	if(isValid(tmp)){
    		count++;
    		if(comp(tmp,p[1])){
		    	p[1].name=tmp.name;
		    	p[1].year=tmp.year;
		    	p[1].month=tmp.month;
		    	p[1].day=tmp.day;
		    }
		    if(comp(p[0],tmp)){
    			p[0].name=tmp.name;
    			p[0].year=tmp.year;
		    	p[0].month=tmp.month;
		    	p[0].day=tmp.day;
    		}
	    }
    }
    // 一开始用的people数组有N个元素，造成段错误（内存溢出）。其实people数组只要有2个元素就行，存最老和最年轻的 
    /*sort(p,p+N,comp);
    int count=0,old,young;
    bool flag=false;
    for(int i=0;i<N;i++){
    	if(isValid(p[i])){
	    	count++;
	    	if(!flag){
	    		young=i;
				flag=true;	
	    	} 
	    	else old=i;
	    } 
    }*/
    if(count==0) cout<<count<<endl;// 注意特殊情况：没有有效生日 
    else cout<<count<<" "<<p[0].name<<" "<<p[1].name<<endl;
}