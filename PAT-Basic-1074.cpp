#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string str,str_1,str_2;
    cin>>str>>str_1>>str_2;
    // ����һ���� 
    int len=max(str_1.length(),str_2.length());
	str_1.insert(0,len-str_1.length(),'0');
 	str_2.insert(0,len-str_2.length(),'0');
    int offset=0,sum=0,i,j;
    vector<int> v;
    for(i=len-1,j=str.length()-1;i>=0;i--,j--){
    	sum=(str_1[i]-'0')+(str_2[i]-'0')+offset;
    	int jinzhi=10;// ��ָ����Ĭ��Ϊ10���� 
    	if(j>=0 && str[j]!='0') jinzhi=str[j]-'0'; 
    	int num=sum%jinzhi;
    	if(sum>=jinzhi) offset=sum/jinzhi;// ��λ��ע����㣬��һ��Ϊ1�� 
    	else offset=0;
    	v.push_back(num); 
    }
    if(offset!=0) v.push_back(offset);
    reverse(v.begin(),v.end());
    bool flag=false;
    for(i=0;i<v.size();i++){
    	if(v[i]!=0) flag=true;// ȥ��ǰ��0 
    	if(flag) cout<<v[i];
    }
	if(!flag) cout<<0<<endl; // ע��0+0����������һ�����Ե�...) 
}