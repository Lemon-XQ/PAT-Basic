#include <iostream>

using namespace std;

int main(){
    int N,num=7;
    char c;
    cin>>N>>c;
    int i=0;
    while(N>=num){// �����ɳ©�ַ��� 
    	i++;
    	num+=2*(3+2*i);
    }
    num-=2*(3+2*i);
    int a=3+2*(i-1);// �����ַ��� 
    int line=a,space=0;
    int sign=-1;
    for(int j=0;j<line;j++){// �����������ַ��� 
	    for(int k=0;k<space;k++){
    		cout<<" ";
    	}
		for(int k=0;k<a;k++){
	    	cout<<c;
	    }	
	    a=a+sign*2;// ÿ�δ�ӡ�ķ��������ϴ����2 
	    space=space-sign;// �ո�����������෴��һ����һ���� 
		if(a==1) sign=1;// �°벿�ַ�ת 
		cout<<endl;
    }   
    cout<<N-num<<endl;
}