#include <iostream>

using namespace std;

int main(){
    int N,M,A,B,grey;
    cin>>M>>N>>A>>B>>grey;
    for(int i=0;i<M;i++){
    	for(int j=0;j<N;j++){
	    	int num;
	    	scanf("%d",&num);
	    	//cin>>num; // ·ÀÖ¹³¬Ê±£¬²»ÓÃcin,cout 
	    	if(num>=A && num<=B) printf("%03d",grey);//cout<<setw(3)<<setfill('0')<<grey;
	    	else printf("%03d",num);//cout<<setw(3)<<setfill('0')<<num;
	    	if(j!=N-1) cout<<" ";
	    }
	    cout<<endl;
    }
}