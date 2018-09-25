#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    double sum=0;
    for(int i=0;i<N;i++){
    	double num;
    	cin>>num;
		//sum+=(num*(N+i*(N-i-1))); // 明明和下面的一样但就是过不了 QAQ
		sum+=num*(N-i)*(i+1);  	 	
    }
    printf("%.2lf",sum);
}