#include<stdio.h>
int main()
{
	int a;
	printf("ÊäÈë³É¼¨:");
	scanf("%d",&a);
	if(a>=90)putchar('A');
	if(a>=80&&a<=89)putchar('B');
	if(a>=70&&a<=79)putchar('C');
	if(a>=60&&a<=69)putchar('D');
	if(a<=59)putchar('E');
	return 0;
}
