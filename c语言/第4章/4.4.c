#include <stdio.h>

int main(){//比大小程序，不用多说了吧 
    int a,b,c,d;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b)a=b;
    if(b<c)b=c;
    if(a<c)a=c;
    printf("%d",a);
    return 0;
  }
