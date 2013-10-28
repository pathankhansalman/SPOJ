#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
int T,i,temp;

	while(cin>>T){
		
		if(T==0) break;
		
		vector<int> A;
		
		for(i=0;i<T;i++){
			cin>>temp;
			A.push_back(temp);
		}
		
		int B[T];
		
		for(i=0;i<T;i++) B[A[i] - 1] = i+1;
		
		int count = 0;

		for(i=0;i<T;i++){
			if(B[i]!=A[i]){
				count++;break;
			}
		}
		
		if(!count) cout<<"ambiguous"<<endl;
		
		else cout<<"not ambiguous"<<endl;
	}
	
	return 0;
}
