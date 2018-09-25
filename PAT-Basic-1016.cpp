#include <iostream>

using namespace std;

int main(){
    int C1,C2;
    cin>>C1>>C2;
    int hour,minute,second;
    hour=(C2-C1)/100/60/60;
    minute=(C2-C1)/100/60%60;
    second=(int)((C2-C1)/100.0+0.5)-hour*3600-minute*60;// 不足1s四舍五入 
    printf("%02d:%02d:%02d",hour,minute,second);
}