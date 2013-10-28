#include <iostream>
#include <math.h>
using namespace std;

int A[100];

void init(){
    int i;
	A[1]=1;
	
	for(i=2;i<101;i++) A[i]=A[i-1]+pow(i,2);
}

int main(){
	int N;
	init();
	
	while(cin>>N){
		
		if(N==0) break;
		
		cout<<A[N]<<endl;
	}
	
	return 0;
}


