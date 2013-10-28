#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
long long T,i,temp,sum;
	
	while(cin>>T){
		
		if(T==0) break;
		
		vector<long long> A,B;
		
		for(i=0;i<T;i++){
			scanf("%lld",&temp);
			A.push_back(temp);
		}
		
		for(i=0;i<T;i++){
			scanf("%lld",&temp);
			B.push_back(temp);
		}
		
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());
		sum = 0;
		
		for(i=0;i<T;i++) sum= sum + A[i]*B[T-1-i];
		
		printf("%lld\n",sum);
	}

	return 0;
}
