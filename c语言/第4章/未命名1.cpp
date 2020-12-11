#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i=0;
	a=1234;
	
do{//求解第一部分 
		a=a/10;	
		i=i+1;
	} while(a!=0);printf("是%d位数\n",i);
	return 0;
}
