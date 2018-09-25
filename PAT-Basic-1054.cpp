#include <iostream>

using namespace std;

/*bool isValid(string str){
	if(str.find('.')!=string::npos){
		if(str.find_last_of('.')!=str.find('.')) return false;
		if(str.length()-str.find('.')-1 > 2) return false;
		if(str.find('.')==str.length())
	} 
	for(int i=0;i<str.length();i++){
		if(!isdigit(str[i])){
			if(!(str[i]=='-' && i==0) && !(str[i]=='.' && i>0 && i<str.length()-1)) return false;
		}
	}
	double num=atof(str.c_str());
	if(num>1000 || num<-1000) return false; 
	return true;
}*/

bool isValid(char* a){
	char b[50];
	double tmp;
	sscanf(a,"%lf",&tmp);
	sprintf(b,"%.2lf",tmp);
	for(int i=0;i<strlen(a);i++){
		if(a[i]!=b[i]) return false; 
	}
	if(tmp>1000 || tmp<-1000) return false;
	return true;
}

int main(){
    int N;
    cin>>N;
    double sum=0,count=0;
    for(int i=0;i<N;i++){
    	char a[50],b[50];
		double tmp;
		bool flag=true;
    	scanf("%s",a);
		sscanf(a,"%lf",&tmp);
		cout<<tmp<<endl;
		sprintf(b,"%.2lf",tmp);
		for(int i=0;i<strlen(a);i++){
			if(a[i]!=b[i]) flag=false; 
		}
		if(tmp>1000 || tmp<-1000) flag=false;
    	if(flag){
	    	count++;
	    	sum+=tmp;
	    }else{
    		cout<<"ERROR: "<<a<<" is not a legal number"<<endl;
    	}
    }
    // 注意number和numbers的区别。。。 
	if(count>1)
		printf("The average of %d numbers is %.2lf\n",count,(double)sum/count);
	else if(count==1)
		printf("The average of 1 number is %.2lf\n",sum); 
	else
		printf("The average of 0 numbers is Undefined\n");
}
/*
#include <iostream>

using namespace std;

bool isValid(string str){
	if(str.find('.')!=string::npos){
		if(str.find_last_of('.')!=str.find('.')) return false;
		if(str.length()-str.find('.')-1 > 2) return false;
	} 
	int index=0;
	if(str[0]=='-') index=1;
	for(int i=0;i<str.length();i++){
		if(!isdigit(str[i])){
			if((str[i]!='.' && str[i]!='-') || (str[i]=='-' && i!=0) ) return false;
		}
	}
	double num=atof(str.c_str());
	if(num>1000 || num<-1000) return false; 
	return true;
}

int main(){
    int N;
    cin>>N;
    double sum=0,count=0;
    for(int i=0;i<N;i++){
    	string str;
    	cin>>str;
    	if(isValid(str)){
	    	count++;
	    	sum+=atof(str.c_str());
	    }else{
    		cout<<"ERROR: "<<str<<" is not a legal number"<<endl;
    	}
    }
    cout<<"The average of "<<count<<" numbers is ";
    if(count==0) cout<<"Undefined"<<endl;
	else if(count==1) printf("%.2lf",sum);
	else printf("%.2lf",sum/double(count));
}
*/