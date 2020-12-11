#include<stdio.h>
int main()
{
	int i=1,max,a;
	do{//使用循环来实现多个数据比大小 
		printf("请输入第%d个数字:",i);
		scanf("%d",&a);
		if(a>max)max=a;
		i++;
	}while(i<=4);
	printf("最大值为%d",max);
	return 0;
}

