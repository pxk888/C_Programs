#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i=0;//这题我居然全都用了循环... 
	printf("输入数字:");
	scanf("%d",&a);
	//if((a/10000)!=0)printf("是5位数\n");
	//else if((a/1000)!=0)printf("是4位数\n");
	//else if((a/100)!=0)printf("是3位数\n");
	//else if((a/10)!=0)printf("是2位数\n");
	//else if((a/1)!=0)printf("是1位数\n");
	c=a;//临时存储变量a的值 
	do{//求解第一部分 
		a=a/10;	
		i=i+1;
	}while(a!=0);
	printf("是%d位数\n",i);
	i=0;
	a=c;
	while(a!=0){//反序 
		b=b*10+a%10;
		a=a/10;
	}
	while(b!=0){//求解第二部分 
		a=b%10;
		b=b/10;
		printf("第%d位数字：%d\n",i+1,a);
		i=i+1;
	}
	a=c;
	
	b=0;
	while(a!=0){//求解第三部分 
		b=b*10+a%10;
		a=a/10;
	}
	printf("倒序结果:%d",b);
	return 0;
}

