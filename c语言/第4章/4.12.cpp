#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,d;//d�ǵ㵽Բ�ĵľ��� 
	int h;
	printf("����x,y:\n");
	scanf("%f,%f",&x,&y);
	if(fabs(x)<=3&&fabs(x)>=1&&fabs(y)<=3&&fabs(x)>=1)//�������ĵ��Ƿ�λ�ڷ�Χ�� 
	{
		d=pow(fabs(x)-2,2)+pow(fabs(y)-2,2);
		if(d<=1)h=10;
		else h=0;
	}
	printf("�����߶�Ϊ%d",h);
	return 0;
}

