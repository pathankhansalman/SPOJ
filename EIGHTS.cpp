#include <iostream>

using namespace std;

int main(){
	
	int T;
	long long k;
	cin>>T;
	
	while(T--){
		cin>>k;
		cout<<(k-1)*250 + 192<<endl;
	}

	return 0;
}
