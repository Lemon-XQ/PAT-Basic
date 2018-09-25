#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string str_1,str_2;
    cin>>str_1>>str_2;
	sort(str_1.begin(),str_1.end());// 排序便于下面一一比较 
	sort(str_2.begin(),str_2.end());
	int count=0;
	int k=0;// start index
	for(int i=0;i<str_2.length();i++){
		for(int j=k;j<str_1.length();j++){
			if(str_1[j]==str_2[i]){
				k=j+1;// 下一个字符从该位置的下一个位置开始找（因为排过序了） 
				count++;// 满足条件的珠子数+1 
				break;
			} 
		}
	} 
	if(count==str_2.length()) cout<<"Yes "<<str_1.length()-str_2.length()<<endl;
	else cout<<"No "<<str_2.length()-count<<endl;
}