#include <iostream>

using namespace std;

int main(){
	long long T,i,j,N,k,max;
	cin>>T;
	
	for(i=0;i<T;i++){
    	cin>>N;
    	long long C[N],L[N];
		max = 0;

		for(j=0;j<N;j++){
			cin>>C[j]>>L[j];
			
			if(L[j]>max) max = L[j];
		}
		
		long long M[max];
		long long count = 0;
		
		for(j=0;j<max;j++){
	    	M[j]=0;
			
			for(k=0;k<N;k++) if(C[k]<= j && L[k]>=j) M[j]++;
			
			if(M[j]>count) count = M[j];
		}
		
		cout<<count<<endl;
	}

	return 0;
}

