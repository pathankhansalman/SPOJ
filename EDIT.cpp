#include <iostream>

using namespace std;

int max(int a,int b){
	int c;
	c= a;
	
	if(b<a) c=b;
	
	return c;
}

int main(){
	int i;
	string str;
	
	while(cin>>str){
		int len = str.length();
		int c1 =0;
		
		for(i=0;i<=len-1;i+=2) if((int)str[i]>92) c1++; 
		
		for(i=1;i<=len-1;i+=2) if((int)str[i]<92) c1++;
		
		cout<<min(c1,len-c1)<<endl;
	}
	
	return 0;
}
