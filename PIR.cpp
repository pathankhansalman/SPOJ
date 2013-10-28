#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	long long T,i;
	long long U,V,W,u,v,w,X,Y,Z,x,y,z;
	long double a,b,c,d;
	cin>>T;
	long double volume;
	long long extra;
	
	for(i=0;i<T;i++){
		cin>>W>>V>>u>>U>>v>>w;
		X=(w+v-U)*(U+v+w);
		x=(U+w-v)*(v+U-w);
		Y=(u+w-V)*(V+w+u);
		y=(V+u-w)*(w+V-u);
		Z=(v+u-W)*(W+u+v);
		z=(W+v-u)*(u+W-v);
		a=sqrt(x*Y*Z);
		b=sqrt(y*Z*X);
		c=sqrt(z*X*Y);
		d=sqrt(x*y*z);
		extra = (192*u*v*w);
		volume=sqrt((b+c+d-a)*(a+c+d-b)*(a+b+d-c)*(a+b+c-d))/(double)extra;
		printf("%.4Lf\n",volume);
	}

	return 0;
}