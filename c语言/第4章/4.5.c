#include <stdio.h>
#include<math.h>


int main(){
    int a;
    int b;
    do//如果一直输入范围外的数字，程序会要求你重输直到你tmd终于输对了为止 
    {
      printf("请输入一个小于1000的正数"); 
	  scanf("%d",&a);
      if(a>1000||a<0)
      printf("请重新输入\n");
    }while(a>1000||a<0);
    b=sqrt(a);
    
    
    
    //scanf("%d",&a);
    //if(a<1000&&a>0)b=sqrt(a);
    //else {printf("璇烽噸鏂拌緭鍏�");
    //scanf("%d",&a);}
    printf("%d",b);
    return 0;
  }
