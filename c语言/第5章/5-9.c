#include <stdio.h>
int main() {
	int x=1,i=1,sum=0;
	while(x<=1000) {

		for(i=1,sum=0; sum<=x&&i<=0.5*x; i++) {
			if(x%i==0)sum=sum+i; }
		if(x==sum) {
			printf("%d its factors are ",x);
			for(i=1; i<=0.5*x; i++) {
				if(x%i==0)printf("%d ",i); }
			putchar('\n'); }

		x++; }
	return 0; }
