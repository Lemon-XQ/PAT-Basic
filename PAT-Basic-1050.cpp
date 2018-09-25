#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    int* arr=new int[N];
    for(int i=0;i<N;i++){
    	cin>>arr[i];  	 	
    }
    sort(arr,arr+N,greater<int>());
    int i,j;
	int m=N,n=1;
    for(i=2;i*i<=N;i++){
    	if(N%i==0){
    		j=N/i;
    		if(abs(m-n)>abs(i-j)){
			    n=min(j,i);
	    		m=max(j,i); 	
		    }
	    }
    }
    int x = -1, y = 0, index = 0;
    int horizontal = n, virtical = m;
    int* arr2=new int[N];
    // ÂÝÐý¾ØÕó 
    while(horizontal > 0 && virtical > 0)
    {
        for(int i = 0; i < horizontal && virtical > 0; i++)  /* toward right */
            arr2[y * n + ++x] = arr[index++];
        virtical--;

        for(int i = 0; i < virtical && horizontal > 0; i++)  /* toward bottom */
            arr2[++y * n + x] = arr[index++];
        horizontal--;

        for(int i = 0; i < horizontal && virtical > 0; i++)  /* toward left */
            arr2[y * n + --x] = arr[index++];
        virtical--;

        for(int i = 0; i < virtical && horizontal > 0; i++)  /* toward top */
            arr2[--y * n + x] = arr[index++];
        horizontal--;
    }
	for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            printf("%d%c", arr2[i * n + j], j == n - 1 ? '\n' : ' ');
}