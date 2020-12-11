#include<stdio.h>
#include <math.h>
int main(){
long int d=300000;
long int p=6000;
double r=0.01,m;
m=(log10((p)/(p-d*r)))/(log10(1+r));
printf("%5.2f",m);
return 0; 
} 

