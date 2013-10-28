#include <iostream>

using namespace std;

int main(){
	long long T;
	
	while(cin>>T) cout<<81*(T/9) + (T%9)*(T%9)<<endl;
	
	return 0;
}

