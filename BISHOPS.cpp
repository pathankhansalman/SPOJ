#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

string reverse(string s){
	int n = s.size() - 1;
	string s1 ="";
	
    for (int i = n; i >= 0; i--){
		s1 += s[i];
	}
	
    return s1;
}

string myitoa(int n){
	string s = "";
	
    if(n == 0) s="0";
	
    while(n>0){
		s.push_back(n%10 + '0');
		n/=10;
	}
	
    return reverse(s);
}

string arith(string s){
    string str = "",curr;
    int len,temp;
    char *c;
    str=s;

    len = str.length();

    if(str[len - 1]!='0'){
        temp = str[len - 1] - '0';
        temp = temp--;
        curr = myitoa(temp);
        str = str.substr(0,len-1) + curr;
    }
    
    else{
        temp = 9;
        curr = myitoa(temp);
        str= arith(str.substr(0,len-1)) + curr;
    }

    return str;
}

string arith2(string s1,string s2,int a){
    string str = " ";
    int len1,len2,temp,temp1,temp2;
    len1=s1.length();
    len2=s2.length();
    
    if(len1==1 || len2==1){
        temp1 = s1[0]-'0';
        temp2 = s2[0]-'0';
        temp = temp1+temp2+a;
        str = myitoa(temp);
    }
    
    else{
        temp1 = s1[len1-1] - '0';
        temp2 = s2[len2-1] - '0';
        temp = temp1 + temp2 + a;
        if(temp>=10) str = arith2(s1.substr(0,len1-1),s2.substr(0,len2-1),1) + myitoa(temp%10);
        else str = arith2(s1.substr(0,len1-1),s2.substr(0,len2-1),0) + myitoa(temp);
    }
    
    return str;
}

int main(){
    string N;

    for (int i = 1; i <= 1000; i++) if (arith2(arith(myitoa(i)),arith(myitoa(i)),0) != myitoa(2*i-2)) cout<<i<<" ";
    
    cout<<endl;

    while(getline(cin,N)){
        
        if(N=="1") cout<<"1"<<endl;
        
        else if(N=="0") cout<<"0"<<endl;
        
        else cout<<arith2(arith(N),arith(N),0)<<endl;
    }

    return 0;
}

