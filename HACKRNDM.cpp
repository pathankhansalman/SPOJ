#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	long long n,k,i,temp,sum=0;
	cin>>n>>k;
	vector<long long> A;
	
	for(i=0;i<n;i++){
		cin>>temp;
		A.push_back(temp);
	}
	
	sort(A.begin(),A.end());
	
	for(i=0;i<n;i++) sum = sum + binary_search(A.begin(),A.end(),A[i]+k);
	
	cout<<sum<<endl;
	
	return 0;
}

