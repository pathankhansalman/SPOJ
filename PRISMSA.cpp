#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	int T,i;
	double N=0.0;
	cin>>T;
	double s=0.0;
	
	for(i=0;i<T;i++){
		cin>>N;
		N=N*1.0000000000;
		N=4*N;
		N=pow(N,2);
		N=log(N);
		N=N/3;
		N=exp(N);
		s=(3*sqrt(3)*N)/2;
		printf("%.10f\n",s);
	}
	
	return 0;
}
