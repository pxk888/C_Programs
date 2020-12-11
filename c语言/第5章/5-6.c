#include <stdio.h>
int main(){
	int n,sum=1,result;
	for(n=1;n<=20;n++){
	sum=sum*n;
	result=sum+result;	
	}
	printf(" %d \n",n-1);
	printf( "----\n");
	printf("\\   \n");
	printf( " >   n!=%d\n",result);
	printf( "/   \n");
	printf( "----\n");
	printf( "n=1 \n");
return 0;	
}
