#include <stdio.h>

int main(){//�ȴ�С���򣬲��ö�˵�˰� 
    int a,b,c,d;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b)a=b;
    if(b<c)b=c;
    if(a<c)a=c;
    printf("%d",a);
    return 0;
  }
