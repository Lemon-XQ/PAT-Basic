#include <iostream>
#include <map>

using namespace std;

int main(){
    int M,N,TOL;
    cin>>M>>N>>TOL;
    int arr[N+2][M+2];// N行M列 填充一圈0 
    map<int,int> m;// 记录某个灰度值出现的次数 
    for(int i=0;i<N+2;i++){
    	for(int j=0;j<M+2;j++){
    		// 填充0 
    		if(i==0 || i==N+1 || j==0 || j==M+1) arr[i][j]=0;
	    	else{
	    		cin>>arr[i][j];
	    		m[arr[i][j]]++;
	    	} 	    	
	    }
    }
    int count=0,row,col,v;
    for(int i=1;i<=N;i++){
    	for(int j=1;j<=M;j++){
    		int grey=arr[i][j];
    		//cout<<m[grey]<<endl; 
	    	if(m[grey]==1 && 
			   abs(grey-arr[i-1][j-1])>TOL && abs(grey-arr[i-1][j])>TOL && abs(grey-arr[i-1][j+1])>TOL &&
			   abs(grey-arr[i][j-1])>TOL && abs(grey-arr[i][j+1])>TOL &&
			   abs(grey-arr[i+1][j-1])>TOL && abs(grey-arr[i+1][j])>TOL && abs(grey-arr[i+1][j+1])>TOL){
   				count++;
   				row=i;
   				col=j;
   				v=grey;
   			}
	    }
    }
    if(count==0) cout<<"Not Exist"<<endl;
    else if(count>1) cout<<"Not Unique"<<endl;
    else cout<<"("<<col<<", "<<row<<"): "<<v<<endl;
}