#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str_1,str_2;
    cin>>str_1>>str_2;
	sort(str_1.begin(),str_1.end());// �����������һһ�Ƚ� 
	sort(str_2.begin(),str_2.end());
	int count=0;
	int k=0;// start index
	for(int i=0;i<str_2.length();i++){
		for(int j=k;j<str_1.length();j++){
			if(str_1[j]==str_2[i]){
				k=j+1;// ��һ���ַ��Ӹ�λ�õ���һ��λ�ÿ�ʼ�ң���Ϊ�Ź����ˣ� 
				count++;// ����������������+1 
				break;
			} 
		}
	} 
	if(count==str_2.length()) cout<<"Yes "<<str_1.length()-str_2.length()<<endl;
	else cout<<"No "<<str_2.length()-count<<endl;
}