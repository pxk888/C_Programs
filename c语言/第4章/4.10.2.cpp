#include<stdio.h>
#include<math.h>
int main(){
	float i,s;
	int c; 
	printf("输入利润I：");
	scanf("%f",&i);
	c=(i-1)/100000; 
	switch(c)
	{
		case 0:s=0.100*i;break;
		case 1:s=0.075*(i-100000)+10000;break;
		case 2:
		case 3:s=0.050*(i-200000)+17500;break;
		case 4:
		case 5:s=0.030*(i-400000)+27500;break;
		case 6:
		case 7:
		case 8:
		case 9:s=0.015*(i-600000)+33500;break;
		case 10:s=0.010*(i-1000000)+39500;break;
	}
	
	
	//if(i<=100000)s=0.100*i;
	//if(i>100000&&i<=200000)s=0.075*(i-100000)+10000; 
	//if(i>200000&&i<=400000)s=0.050*(i-200000)+17500;
	//if(i>400000&&i<=600000)s=0.030*(i-400000)+27500;
	//if(i>600000&&i<=1000000)s=0.015*(i-600000)+33500;
	//if(i>1000000)s=0.010*(i-1000000)+39500;
	printf("奖金为%.2f元",s);
	return 0;
	
	
	
}
