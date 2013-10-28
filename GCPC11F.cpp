#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int T,i,len,temp,count,max,max1,temp2,diff,j;
	string str,str2;
	cin>>T;
	getline(cin,str2);
	
	for(i=0;i<T;i++){
		getline(cin,str);
		len = str.length();
		int A[26];
		
		for(j=65;j<91;j++) A[j]=0;

		for(j=0;j<len;j++){
			temp = (int) str[j];
			
			if(temp!=32) A[temp]++;
		}
		
		max = 0;
		max1 =0;
		
		for(j=65;j<91;j++){
			
			if(A[j]>max){
    			max1 = j;	
    			max=A[j];
			}
		}	
		
		count = 0;
		
		for(j=65;j<91;j++) if(A[j]==max) count++;	
		
		if(count > 1) cout<<"NOT POSSIBLE"<<endl;
		
		else{
			diff = max1 - 69;
			
			for(j=0;j<len;j++){

    			if(str[j]!=' '){
					temp2 = (int)str[j];
					temp2 = temp2 - diff;
					
					if(temp2<65) temp2+=26;
					
					if(temp2>90) temp2-=26;
					
					str[j] = (char)temp2;
    			}
			}

			cout<<(26+diff)%26<<" "<<str<<endl;
		}
	}
	
	return 0;
}

