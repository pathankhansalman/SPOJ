#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	int N;
	float pi,sum;
	
	while(cin>>N){
		
		if(N==0) break;
		
		pi = 3.1416;
		sum = pow(N,2)/(2*pi);
		printf("%.2f\n",sum);
	}
	
	return 0;
}
