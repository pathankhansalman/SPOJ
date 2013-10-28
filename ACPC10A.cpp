#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	
	while(cin>>a>>b>>c){
		
		if(a==0 && b==0 && c==0) break;
		
		if(b-a == c-b) cout<<"AP "<<c+b-a<<endl;
		
		else cout<<"GP "<<c*b/a<<endl;
	}

	return 0;
}

