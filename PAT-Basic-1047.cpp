#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[1000]={0};
	for(int i=0;i<N;i++){
		int team,mem,score;
		scanf("%d-%d %d",&team,&mem,&score);
		arr[team-1]+=score;
	} 
	int max=0,max_team;
	for(int i=0;i<1000;i++){
		if(arr[i]>max){
			max=arr[i];
			max_team=i+1;
		}
	}
	cout<<max_team<<" "<<max<<endl;
}