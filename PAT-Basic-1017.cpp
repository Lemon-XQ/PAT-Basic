#include <iostream>

using namespace std;

int main(){
    int N,num=7;
    char c;
    cin>>N>>c;
    int i=0;
    while(N>=num){// 找最大沙漏字符数 
    	i++;
    	num+=2*(3+2*i);
    }
    num-=2*(3+2*i);
    int a=3+2*(i-1);// 首行字符数 
    int line=a,space=0;
    int sign=-1;
    for(int j=0;j<line;j++){// 行数即首行字符数 
	    for(int k=0;k<space;k++){
    		cout<<" ";
    	}
		for(int k=0;k<a;k++){
	    	cout<<c;
	    }	
	    a=a+sign*2;// 每次打印的符号数与上次相差2 
	    space=space-sign;// 空格数与符号数相反，一个增一个减 
		if(a==1) sign=1;// 下半部分反转 
		cout<<endl;
    }   
    cout<<N-num<<endl;
}