#include<stdio.h>
#include<math.h>

int weishu(int x)
	{
	int i;
	do{//����һ���� 
		x=x/10;	
		i=i+1;
	}while(x!=0);
	return(i-1);	
	}
	
int fanxv(int x)
	{
	int b=0;
	while(x!=0)
		{//���������� 
		b=b*10+x%10;
		x=x/10;
		}
	return(b);
	}
		
int main()
{
	int a,b,c,i=0;//�����Ҿ�Ȼȫ������ѭ��...
	printf("��������:");
	scanf("%d",&a);
	c=weishu(a);
	printf("��%dλ��\n",weishu(c));
	b=fanxv(a);
	while(i<=c)
	{
		printf("��%dλ��:%d\n",i+1,b%10);
		b=b/10;
		i++;
	}
	b=a;
	i=0;
	
	printf("������Ϊ:");
	while(i<=c){
		printf("%d",b%10);
		b=b/10;
		i++;
	}
	putchar('\n');
	return 0;	
}

