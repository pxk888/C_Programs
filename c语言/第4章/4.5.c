#include <stdio.h>
#include<math.h>


int main(){
    int a;
    int b;
    do//Èç¹ûÒ»Ö±ÊäÈë·¶Î§ÍâµÄÊı×Ö£¬³ÌĞò»áÒªÇóÄãÖØÊäÖ±µ½ÄãtmdÖÕÓÚÊä¶ÔÁËÎªÖ¹ 
    {
      printf("ÇëÊäÈëÒ»¸öĞ¡ÓÚ1000µÄÕıÊı"); 
	  scanf("%d",&a);
      if(a>1000||a<0)
      printf("ÇëÖØĞÂÊäÈë\n");
    }while(a>1000||a<0);
    b=sqrt(a);
    
    
    
    //scanf("%d",&a);
    //if(a<1000&&a>0)b=sqrt(a);
    //else {printf("è¯·é‡æ–°è¾“å…¥");
    //scanf("%d",&a);}
    printf("%d",b);
    return 0;
  }
