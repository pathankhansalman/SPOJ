#include <iostream>

using namespace std;

int max(int a,int b){
	if(a>b) return a;
	
	else return b;
}

int main(){
	int t=0,i=0,x1=0,x2=0,x3=0,pizza=0;
	string s;
	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>s;
		
		if(s=="1/4") x1++;
		
		if(s=="1/2") x2++;
		
		if(s=="3/4") x3++;
	}
	
	pizza+=x3;
	
	if(x3>=x1) x1=0;
	
	else x1=x1-x3;
	
	if(x2%2==1){
		x1=max(0,x1-2);
		pizza++;
	}
	
	pizza+=x2/2;
	pizza+=(x1+3)/4;
	pizza++;
	cout<<pizza<<endl;
	
	return 0;
}

