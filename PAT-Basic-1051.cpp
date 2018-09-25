#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double R1,P1,R2,P2,A1,B1,A2,B2;
    cin>>R1>>P1>>R2>>P2;
    double real,vir;
    A1=R1*cos(P1); B1=R1*sin(P1);
    A2=R2*cos(P2); B2=R2*sin(P2);
    real=A1*A2-B1*B2;
    vir=A2*B1+A1*B2;
    int r=(fabs(real)-0.01<0)?0:1;
    int v=(fabs(vir)-0.01<0)?0:1;
    if(r==0 && v==0) printf("0");// 浮点数小于0.01就是0了
    else if(r==0 && v!=0) printf("0.00%+.2lfi",vir);// 实部虚部均为0输出0，只是实部为0输出0.00 
    else if(r!=0 && v==0) printf("%.2lf+0.00i",real);
    else printf("%.2lf%+.2lfi",real,vir);
}