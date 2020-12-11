#include <stdio.h>
int main(){
int x=100,a,b,c;
while(x<=999){
	a=x/100;
	b=(x-100*a)/10;
	c=x%10;
	if(x==a*a*a+b*b*b+c*c*c)printf("%d\n",x);
	x++;}	
	return 0;	
}
