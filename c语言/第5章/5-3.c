#include<stdio.h>
int main(){
	int m,n,a;
	printf("��������������(�Զ��ŷֿ�)��");
	scanf("%d,%d",&m,&n);
while(m%n!=0){
	a=m%n;
	m=n,n=a;
}
	printf("%d",n);
	return 0;	
}
