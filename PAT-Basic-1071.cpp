#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int T,K;
    cin>>T>>K;
    int n1,b,t,n2;
    for(int i=0;i<K;i++){
    	cin>>n1>>b>>t>>n2;
    	if(t>T) cout<<"Not enough tokens.  Total = "<<T<<"."<<endl;
    	else{
	    	if(b==0 && n2<n1 || b==1 && n2>n1){
	    		T+=t;
	    		cout<<"Win "<<t<<"!  Total = "<<T<<"."<<endl;
	    	}else{
	    		T-=t;
	    		cout<<"Lose "<<t<<".  Total = "<<T<<"."<<endl;
	    	}
	    }
	    if(T<=0){
    		cout<<"Game Over."<<endl;
    		break;
    	}
    }
}