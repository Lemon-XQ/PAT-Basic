#include <iostream>
#include <algorithm>
 
using namespace std;
 
struct cake{
    double count;
    double price;
};
 
bool comp(cake a,cake b){
    return (a.price/a.count)>(b.price/b.count);
}
 
int main(){
    int N,D;
    cin>>N>>D;
    cake* c=new cake[N];
    for(int i=0;i<N;i++){
        cin>>c[i].count;
    }
    for(int i=0;i<N;i++){
        cin>>c[i].price;
        //c[i].price/=c[i].count; // �ȳ��Ļ������ۼ�ʱ��Ӱ�쾫�ȡ����� 
    }
    double max_profit=0;
    sort(c,c+N,comp);
    int last=0;
    for(int i=0;i<N;i++){
        if(c[i].count>=D-last){
            max_profit+=(D-last)*(c[i].price/c[i].count);
            break;
        }else{
            max_profit+=c[i].price;
            last+=c[i].count;
        }
    }
    printf("%.2f",max_profit);
}