#include <iostream>
#include <math.h>

using namespace std;

char A[1000000];

void sieve(){
    long long i,j;
    
    for(i=0;i<1000001;i++){
        A[i]='0';
    }

    for(i=2;i<1000001;i++) if(A[i]=='0') for(j=i*i;j<1000001;j+=i) A[j]='1';
}

int sfp(long long a){
    int count=0;
    int temp;
    int i;
    long long curr;
    
    for(i=2;i<1001;i++){
        curr=a;
        
        if(A[i]=='0' && curr%i==0){
            temp=0;
            
            while(curr>0 && curr%i==0){
                curr=(long long)curr/i;
                temp++;
            }
        }
        
        if(temp>count) count=temp;
    }

    if(count == 0) count++;

    return count;
}

int main(){
    int i,T;
    long long N;
    sieve();
    cin>>T;
    
    for(i=0;i<T;i++){
       cin>>N;
        cout<<sfp(N)<<endl;
    }

    return 0;
}

