#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
	int T,i,k;
	int N,K;
	long long temp,min;
	cin>>T;
	
	for(k=0;k<T;k++){
		cin>>N>>K;
		vector<long long> A;
		
		for(i=0;i<N;i++){
    		cin>>temp;
    		A.push_back(temp);
		}
		
		sort(A.begin(),A.end());
		min=0;
		
		for(i=0;i<N-(K-1);i++){
			temp = fabs(A.at(K-1+i)-A.at(i));
			
			if(min==0) min=temp;
			
			else if(temp<min) min=temp;
		}
		
		cout<<min<<endl;
	}
	
	return 0;
}

