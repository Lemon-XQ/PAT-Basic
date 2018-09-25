#include <iostream>

using namespace std;

// 0:win 1:equal 2:lose
int solution(char a,char b){
	if(a==b) return 1;
	if(a=='B'&&b=='C' || a=='J'&&b=='B' || a=='C'&&b=='J') return 0;
	return 2;
}

int main(){
	int N;
	cin>>N;
	int A[3]={0};
	int B[3]={0}; 
	int resultA[3]={0};
	int resultB[3]={0};
	char a,b;
	for(int i=0;i<N;i++){
		cin>>a>>b;
		int res=solution(a,b);
		resultA[res]++;
		resultB[2-res]++;// B的结果与A相反 
		if(res==0){// 甲赢 
			if(a=='C') A[0]++;
			if(a=='J') A[1]++;
			if(a=='B') A[2]++;
		}
		if(res==2){// 乙赢 
			if(b=='C') B[0]++;
			if(b=='J') B[1]++;
			if(b=='B') B[2]++;
		}
	}
	cout<<resultA[0]<<" "<<resultA[1]<<" "<<resultA[2]<<endl;
	cout<<resultB[0]<<" "<<resultB[1]<<" "<<resultB[2]<<endl;
	if(A[2]>=A[0] && A[2]>=A[1]) a='B';
	else if(A[0]>=A[1] && A[0]>=A[2]) a='C';
	else if(A[1]>=A[0] && A[1]>=A[2]) a='J';
	
	if(B[2]>=B[0] && B[2]>=B[1]) b='B';
	else if(B[0]>=B[1] && B[0]>=B[2]) b='C';
	else if(B[1]>=B[0] && B[1]>=B[2]) b='J';
	cout<<a<<" "<<b<<endl;
} 