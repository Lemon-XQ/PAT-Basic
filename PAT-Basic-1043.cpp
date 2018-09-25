#include <iostream>
#include <algorithm> 

using namespace std;

int main(){
    string str_1,str_2;
    cin>>str_1;
    for(int i=0;i<str_1.length();i++){
    	if(str_1[i]=='P' || str_1[i]=='A' || str_1[i]=='T' 
			|| str_1[i]=='e' || str_1[i]=='s' || str_1[i]=='t')
			str_2.push_back(str_1[i]);
    }
    sort(str_2.begin(),str_2.end());
    int P_len=0,A_len=0,T_len=0,e_len=0,s_len=0,t_len=0;
    // 考虑某个字符从不出现的情况 
	if(str_2.find('P')!=-1) P_len=str_2.find_last_of('P')-str_2.find('P')+1;
    if(str_2.find('A')!=-1) A_len=str_2.find_last_of('A')-str_2.find('A')+1;
    if(str_2.find('T')!=-1) T_len=str_2.find_last_of('T')-str_2.find('T')+1;
    if(str_2.find('e')!=-1) e_len=str_2.find_last_of('e')-str_2.find('e')+1;
    if(str_2.find('s')!=-1) s_len=str_2.find_last_of('s')-str_2.find('s')+1;
    if(str_2.find('t')!=-1) t_len=str_2.find_last_of('t')-str_2.find('t')+1;
    while(P_len!=0 || A_len!=0 || T_len!=0 || e_len!=0 || s_len!=0 || t_len!=0){
    	if(P_len!=0){
	    	cout<<'P';
	    	P_len--;
	    }
	    if(A_len!=0){
	    	cout<<'A';
	    	A_len--;
	    }
	    if(T_len!=0){
	    	cout<<'T';
	    	T_len--;
	    }
	    if(e_len!=0){
	    	cout<<'e';
	    	e_len--;
	    }
	    if(s_len!=0){
	    	cout<<'s';
	    	s_len--;
	    }
	    if(t_len!=0){
	    	cout<<'t';
	    	t_len--;
	    }
    }
}