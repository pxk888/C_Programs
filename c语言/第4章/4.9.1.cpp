#include<stdio.h>
#include<math.h>

int weishu(int x)
	{
	int i;
	do{//求解第一部分 
		x=x/10;	
		i=i+1;
	}while(x!=0);
	return(i-1);	
	}
	
int fanxv(int x)
	{
	int b=0;
	while(x!=0)
		{//求解第三部分 
		b=b*10+x%10;
		x=x/10;
		}
	return(b);
	}
		
int main()
{
	int a,b,c,i=0;//这题我居然全都用了循环...
	printf("输入数字:");
	scanf("%d",&a);
	c=weishu(a);
	printf("是%d位数\n",weishu(c));
	b=fanxv(a);
	while(i<=c)
	{
		printf("第%d位数:%d\n",i+1,b%10);
		b=b/10;
		i++;
	}
	b=a;
	i=0;
	
	printf("反序结果为:");
	while(i<=c){
		printf("%d",b%10);
		b=b/10;
		i++;
	}
	putchar('\n');
	return 0;	
}

