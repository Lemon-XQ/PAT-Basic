#include <iostream>

using namespace std;

char* daystr[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

int main(){
	string str_1,str_2,str_3,str_4;
	cin >> str_1 >> str_2 >> str_3 >> str_4;
	string day;
	int hour,minute;
	int len=min(str_1.length(),str_2.length());
	bool flag=false;
	// �����1,2���ַ��� 
	for(int i=0;i<len;i++){
		if(str_1[i]==str_2[i]){
			if(!flag && isupper(str_1[i])){// ��1����ͬ�Ĵ�д��ĸ 
				day=daystr[str_1[i]-'A'];
				flag=true;
			}else if(flag){// ��2����ͬ���ַ� 
				if(!isdigit(str_1[i]) && !isupper(str_1[i]) && (str_1[i]<'A' || str_1[i]>'N')) continue;
				if(isdigit(str_1[i])) hour=str_1[i]-'0';
				else if(str_1[i]>='A' && str_1[i]<='N') hour=10+str_1[i]-'A';
				break; 
			}		
		}		
	}
	// �����3,4���ַ���
	len=min(str_3.length(),str_4.length());
	for(int i=0;i<len;i++){
		if(str_3[i]==str_4[i] && isalpha(str_3[i])){
			minute=i;	
			break;
		} 
	} 
	cout<<day<<" ";
	printf("%02d:%02d",hour,minute);
} 