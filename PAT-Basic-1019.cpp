#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main(){
    string str_1,str_2;
    cin>>str_1>>str_2;
    int j=0;
    vector<char> v;
    for(int i=0;i<str_1.length();i++){
    	if(str_1[i]!=str_2[j]){
    		if(isalpha(str_1[i])) str_1[i]=toupper(str_1[i]);
	    	v.push_back(str_1[i]);
	    }
		else j++;
    }
    // ȥ�أ����ı�ԭ��˳�� 
    vector<char>::iterator iter,iter2;
    for(iter=++v.begin();iter!=v.end();){
    	iter2=find(v.begin(),iter,*iter);// iter֮ǰ�Ƿ����ظ�Ԫ��
		if(iter2!=iter) iter=v.erase(iter);// ȥ����һ�� 
		else iter++;
    }
    for(iter=v.begin();iter!=v.end();iter++)
    	cout<<*iter;
}