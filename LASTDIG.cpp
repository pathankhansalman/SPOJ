#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int T,i,a,k,l,m,n,o;
	long long b;
	cin>>T;
	
	for(i=0;i<T;i++){
		cin>>a>>b;
		k=b%4;
		l=b%2;
		m=a%10;
		n=pow(m,k);
		o=pow(m,l);
		
		if(b==0) cout<<"1"<<endl;
		
		else{
			if(m == 0 || m == 1 || m == 5 || m == 6) cout<<m<<endl;
			
			else if(m==2){
				if(k==0) cout<<"6"<<endl;
				else cout<<n%10<<endl;
			}

			else if(m==3) cout<<n%10<<endl;
			
			else if(m==4){
				if(l==0) cout<<"6"<<endl;
				if(l==1) cout<<"4"<<endl;
			}
			
			else if(m==7) cout<<n%10<<endl;
			
			else if(m==8){
				if(k==0) cout<<"6"<<endl;
				
				else cout<<n%10<<endl;
			}
			
			else if(m==9) cout<<o%10<<endl;
			
			else continue;
		}
	}
	
	return 0;
}

