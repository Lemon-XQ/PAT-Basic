#include <iostream>

using namespace std;

int main(){
    string key,str;
    getline(cin,key);
    getline(cin,str);
    //cin>>key>>str; // ������cin������û�л�������һ��Ϊ���С����� 
    bool flag=false;
    bool upper=true;
    for(int i=0;i<key.length();i++){
    	if(key[i]=='+'){
	    	upper=false;
	    	break;
	    }
    }
    for(int i=0;i<str.length();i++){
    	flag=false;
    	for(int j=0;j<key.length();j++){
    		// 1.�ϵ�������ʱ���ܴ�ӡ��д��ĸ
			// 2.�ַ������ڻ�����
			// 3.��Сд�����ܴ�  
	    	if(!upper && isupper(str[i]) || str[i]==key[j] || str[i]==tolower(key[j])) {
	    		flag=true;
	    		break;
	    	}
    	}
    	if(!flag) cout<<str[i];
    }
    cout<<endl;
}