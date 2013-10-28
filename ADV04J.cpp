#include <iostream>

using namespace std;

long long A[1000001];

void filllog(){
	int i;
	A[1]=1;
	
	for(i=2;i<1000001;i++){
		A[i]=1+A[(i+1)/2];
	}
}

int main(){
	int T,i;
	long long N;
	cin>>T;
	filllog();
	
	for(i=0;i<T;i++){
		cin>>N;
		cout<<A[N]<<endl;
	}
	
	return 0;
}

