#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

bool possible(vector<int>A){
	int count=0;
	int i=0;
	int size;
	size = A.size();
	
	for(i=0;i<size-1;i++) if((A[i+1]-A[i])>200) count++;
	
	if(A[0]!=0) count++;
	
	if((A[size-1]-A[size-2])>200) count++;

	if((1422-A[size-1])>100) count++;
	
	if(count>0) return false;
	
	else return true;
}

int main(){
	int i,j,N;
	
	for(;;){
		cin>>N;
		
		if(N==0) break;
		
		else{
			vector<int> s;
			
			for(i=0;i<N;i++){
				cin>>j;
				s.push_back(j);
			}
			
			sort(s.begin(),s.end());
			
			if(possible(s)) cout<<"POSSIBLE"<<endl;
			
			else cout<<"IMPOSSIBLE"<<endl;
		}
	}
	
	return 0;
}
