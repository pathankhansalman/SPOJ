#include <iostream>

using namespace std;

int countin(string s1,string s2){
	int count = 0;
	int len = s1.length();
	
	if(len == 3){
		if(s1 == s2) count++;
		else count =0;
	} 
	
	else{
		if(s1.substr(0,3)==s2) count = 1 + countin(s1.substr(1),s2);
		if(s1.substr(0,3)!=s2) count = countin(s1.substr(1),s2);
	}
	
	return count;
}

int main(){
	int T,i,N;
	string str;
	cin>>T;
	
	for(i=0;i<T;i++){
		cin>>N;
		cin>>str;
		cout<<N<<" "<<countin(str,"TTT")<<" "<<countin(str,"TTH")<<" "<<countin(str,"THT")<<" "<<countin(str,"THH")<<" "<<countin(str,"HTT")<<" "<<countin(str,"HTH")<<" "<<countin(str,"HHT")<<" "<<countin(str,"HHH")<<endl;
	}
	
	return 0;
}
