#include<stdio.h>
int main()
{
	int i=1,max,a;
	do{//ʹ��ѭ����ʵ�ֶ�����ݱȴ�С 
		printf("�������%d������:",i);
		scanf("%d",&a);
		if(a>max)max=a;
		i++;
	}while(i<=4);
	printf("���ֵΪ%d",max);
	return 0;
}

