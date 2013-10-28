# include <iostream>
# include <cstdlib>
using namespace std;

string array[101];

int edit(){
    for (int j = 100; j >= 0; j --) for(int i=0;i<=200;i++) array[j][i] += '0';
}

int main (int argc, char const* argv[]){
    string tmp0 = "";

    for (int j = 200; j >= 0; j --) tmp0+='\0';        

    for (int j = 100; j >= 0; j --) array[j]=tmp0;        
    
    array[0][200] = 1;
    
    for (int i = 1; i <= 100; i += 1){
        int carry = 0;
        
        for (int j = 200; j >= 0; j -- ){
            carry = array[i-1][j]*i+carry;
            array[i][j] = carry%10;
            carry = carry/10;
        }
    }
    
    edit();
    int tmp,tc;
    cin>>tc;
    
    while(tc--){
        cin>>tmp;
        tmp0 = array[tmp];
        int start = 0;
        
        while(tmp0[start]=='0') start++;
        
        while(start<=200){
                cout<<tmp0[start];
                start++;
        }    

        cout<<endl;
    }

    return 0;
}
