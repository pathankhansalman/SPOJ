#include <iostream>
#include <set>

using namespace std;

int main(){
	int T,temp,i,j,N,index=0;
	cin>>T;
	set<int> A;
	int B[10001];
	int size=0;
	
	for(i=0;i<T;i++){
    	cin>>temp;
		A.insert(temp);
		cin>>N;
		
		for(j=0;j<N;j++){
			cin>>B[index];
			index++;
			size++;
		}
	}

	int frofr=0;
	set<int> C;
	
	for(i=0;i<size;i++){
		
		if(A.count(B[i])==0){
    		if(C.count(B[i])==0) frofr++;
			C.insert(B[i]);
		}
	}
	
	cout<<frofr<<endl;
	
	return 0;
}

