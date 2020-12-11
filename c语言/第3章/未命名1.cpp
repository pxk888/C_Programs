#include<stdio.h>
#include <math.h>
int main(){
	double p,r=0.07;
	int n=10;
	p=pow((1+r),n);
	printf("%5.3f",p);
	return 0;
} 

