#include <iostream>

using namespace std;

int main(){
	long long L,T,N,K,F,temp;
	cin>>L;
	
	while(L--){
		cin>>N>>K>>T>>F;
		temp = K*F - N;
		temp = temp /(K-1);
		cout<<temp<<endl;
	}
	
	return 0;
}
