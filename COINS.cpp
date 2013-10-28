#include <iostream>
#include <stdio.h>

using namespace std;

long long A[500000];

long long max(long long a,long long b){
	if(a>=b) return a;
	
	else return b;
}

long long getmax(long long n){
	if(n==0) return 0;
	
	if(n<500000) return max(n,A[n/2]+A[n/3]+A[n/4]);
	
	else return max(n,getmax(n/2)+getmax(n/3)+getmax(n/4));
}

void init(){
    long long i;
	
	for(i=0;i<500000;i++) A[i]=getmax(i);
}

int main(){
	long long x,temp1,temp2,temp3;
	init();
	
	while(cin>>x) cout<<getmax(x)<<endl;
	
	return 0;
}

