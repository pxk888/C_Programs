#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i=0;
	a=1234;
	
do{//����һ���� 
		a=a/10;	
		i=i+1;
	} while(a!=0);printf("��%dλ��\n",i);
	return 0;
}
