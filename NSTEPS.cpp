#include <iostream>

using namespace std;

int main(){
	int T,i,temp1,temp2;
	cin>>T;
	
	for(i=0;i<T;i++){
		cin>>temp1>>temp2;
		
		if(temp1%2==0 && temp2==temp1) cout<<2*temp1<<endl;
		
		else if(temp1%2==0 && temp2==temp1-2) cout<<temp1+temp2<<endl;
		
		else if(temp1%2!=0 && temp2==temp1) cout<<2*temp1-1<<endl;
		
		else if(temp1%2!=0 && temp2==temp1-2) cout<<temp1+temp2-1<<endl;
		
		else cout<<"No Number"<<endl;
	}
	
	return 0;
}