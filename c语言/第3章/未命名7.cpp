#include<stdio.h>

int main(){
	const float PI=3.14159265;
	float r,h,zc,mj,qbmj,qtj,yztj;
	printf("����뾶r��");
	scanf("%f",&r);
	printf("�����h��");
	scanf("%f",&h);
	zc=2*PI*r;
	mj=PI*r*r;
	qbmj=4*PI*r*r;
	qtj=(4/3)*PI*r*r*r; 
	yztj=mj*h;
	printf("�ܳ�=%f\n���=%f\n������=%f\n�����=%f\nԲ�����=%f\n",zc,mj,qbmj,qtj,yztj);
	return 0;
	
}
