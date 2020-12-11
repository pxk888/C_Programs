#include<stdio.h>

int main(){
	const float PI=3.14159265;
	float r,h,zc,mj,qbmj,qtj,yztj;
	printf("输入半径r：");
	scanf("%f",&r);
	printf("输入高h：");
	scanf("%f",&h);
	zc=2*PI*r;
	mj=PI*r*r;
	qbmj=4*PI*r*r;
	qtj=(4/3)*PI*r*r*r; 
	yztj=mj*h;
	printf("周长=%f\n面积=%f\n球表面积=%f\n球体积=%f\n圆柱体积=%f\n",zc,mj,qbmj,qtj,yztj);
	return 0;
	
}
