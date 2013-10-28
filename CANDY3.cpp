#include <iostream>

using namespace std;

int main(){
	long long T,i,j,N,temp,sum;
	cin>>T;
	
	for(i=0;i<T;i++){
		cin>>N;
		sum=0;
		
		for(j=0;j<N;j++){
			cin>>temp;
			sum=(sum+temp)%N;
		}
		
		if(sum%N==0) cout<<"YES"<<endl;
		
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
