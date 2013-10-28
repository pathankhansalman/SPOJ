#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int Z(int b){
    int i=0;
    int floor,add;
    add = b/pow(5,i);
    floor=0;
    
    while(add>=1){
        i++;
        floor=floor + b/pow(5,i);
        add = b/pow(5,i);
    }
    
    return floor;
}

int main(){
    int T;
    cin>>T;
    int i;
    int N[T];
    
    for(i=0;i<T;i++) cin>>N[i];
    
    for(i=0;i<T;i++) cout<<Z(N[i])<<endl;
    
    return 0;
}

