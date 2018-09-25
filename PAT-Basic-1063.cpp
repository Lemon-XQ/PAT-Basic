#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin>>N;
    double ans=0;
    for(int i=0;i<N;i++){
    	int real,vir;
    	cin>>real>>vir;
    	double num=sqrt(real*real+vir*vir);
    	if(num>ans) ans=num;
    }
    printf("%.2lf",ans);
}