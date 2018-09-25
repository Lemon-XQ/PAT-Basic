#include <iostream>

using namespace std;

int main(){
    int N,D,K;
    double e;
	cin>>N>>e>>D;
	int may_empty=0,empty=0,count=0;
	double num; 
	for(int i=0;i<N;i++){
		count=0;
		cin>>K;
		for(int j=0;j<K;j++){
			cin>>num;
			if(num<e) count++;
		}
		if(count>K/2){
		  if(K>D) empty++;// 一直过不去的点= =是K>D 不是count>D读错题了。。 
		  else may_empty++;
		}
	}
	printf("%.1lf%% %.1lf%%",(double)(may_empty*100)/double(N),(double)(empty*100)/double(N));
}