#include <iostream>

using namespace std;

int gcd(int a,int b){
	int c;
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	return a;
}

int main(){
    int N1,N2,M1,M2,K;
    scanf("%d/%d %d/%d %d",&N1,&M1,&N2,&M2,&K);
    if(N1*M2>N2*M1){// 注意二者的大小 
    	int tmp=N1;
    	N1=N2; N2=tmp;
    	tmp=M1; M1=M2; M2=tmp;
    }
    bool flag=false;
    for(int i=1;i*M2<N2*K;i++){// 注意临界条件，有可能超过1 
    	if(i*M1>N1*K && i*M2<N2*K && gcd(i,K)==1){// 能够约分的也不能要 
	    	if(flag) cout<<" ";
	    	cout<<i<<"/"<<K;
	    	flag=true;
	    }
    }
}