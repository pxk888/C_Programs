#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,d;//d是点到圆心的距离 
	int h;
	printf("输入x,y:\n");
	scanf("%f,%f",&x,&y);
	if(fabs(x)<=3&&fabs(x)>=1&&fabs(y)<=3&&fabs(x)>=1)//检查输入的点是否位于范围内 
	{
		d=pow(fabs(x)-2,2)+pow(fabs(y)-2,2);
		if(d<=1)h=10;
		else h=0;
	}
	printf("建筑高度为%d",h);
	return 0;
}

