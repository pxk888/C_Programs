#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i=0;//�����Ҿ�Ȼȫ������ѭ��... 
	printf("��������:");
	scanf("%d",&a);
	//if((a/10000)!=0)printf("��5λ��\n");
	//else if((a/1000)!=0)printf("��4λ��\n");
	//else if((a/100)!=0)printf("��3λ��\n");
	//else if((a/10)!=0)printf("��2λ��\n");
	//else if((a/1)!=0)printf("��1λ��\n");
	c=a;//��ʱ�洢����a��ֵ 
	do{//����һ���� 
		a=a/10;	
		i=i+1;
	}while(a!=0);
	printf("��%dλ��\n",i);
	i=0;
	a=c;
	while(a!=0){//���� 
		b=b*10+a%10;
		a=a/10;
	}
	while(b!=0){//���ڶ����� 
		a=b%10;
		b=b/10;
		printf("��%dλ���֣�%d\n",i+1,a);
		i=i+1;
	}
	a=c;
	
	b=0;
	while(a!=0){//���������� 
		b=b*10+a%10;
		a=a/10;
	}
	printf("������:%d",b);
	return 0;
}

