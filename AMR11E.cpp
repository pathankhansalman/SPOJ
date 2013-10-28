#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A[10001];

void sieve(){
    long long i,j;
    
    for(i=0;i<10001;i++) A[i]=0;

    for(i=2;i<10001;i++) if(A[i]==0) for(j=i*i;j<10001;j+=i) A[j]=1;
}

vector<int> B;
int C[3000];

void ins(){
    int i,j;
    
    for(i=0;i<3000;i++) C[i]=0;
    
    for(i=0;i<3000;i++){
        
        for(j=2;j<10001;j++){
            
            if(A[j]==0 && (i+1)%j==0) C[i+1]++;
            
            if(C[i+1]==3) break;
        }
        
        if(C[i+1]==3) B.push_back(i+1);
    }
    
    sort(B.begin(),B.end());
}

int main(){
    int T,i,N;
    sieve();
    ins();
    cin>>T;
    
    for(i=0;i<T;i++){
        cin>>N;
        cout<<B[N-1]<<endl;
    }
    
    return 0;
}

