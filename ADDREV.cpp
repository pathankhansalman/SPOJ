#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

string filter(string s){
	string str,str2;
	
	if(s[0]!='0'){
    	str=s;
    	return str;
	}
	
	else{
		str=s.substr(1);
		str2=filter(str);
		return str2;
	}
}

string reverse(string s){
	int n = s.size() - 1;
	string s1 ="";
	
	for (int i = n; i >= 0; i--) s1 += s[i];
	
	return s1;
}

string myitoa(int n){
	string s = "";
	
	while(n>0){
		s.push_back(n%10 + '0');
		n/=10;
	}
	
	return s;
}

int main(){
	int T,i,n1,n2,nl1,nl2,sum;
	string s1,s2,res,res2;
	cin>>T;
	
	for(i=0;i<T;i++){
		cin>>n1>>n2;
		s1=myitoa(n1);
		s2=myitoa(n2);
		char c1[s1.length()];
		char c2[s2.length()];
		strcpy(c1,s1.c_str());
		strcpy(c2,s2.c_str());
		nl1=atoi(c1);
		nl2=atoi(c2);
		sum=nl1+nl2;
		res=myitoa(sum);
		res2=filter(res);
		cout<<res2<<endl;
	}
	
	return 0;
}
