#include <stdio.h>
#include<math.h>


int main(){
    int a;
    int b;
    do//���һֱ���뷶Χ������֣������Ҫ��������ֱ����tmd���������Ϊֹ 
    {
      printf("������һ��С��1000������"); 
	  scanf("%d",&a);
      if(a>1000||a<0)
      printf("����������\n");
    }while(a>1000||a<0);
    b=sqrt(a);
    
    
    
    //scanf("%d",&a);
    //if(a<1000&&a>0)b=sqrt(a);
    //else {printf("请重新输入");
    //scanf("%d",&a);}
    printf("%d",b);
    return 0;
  }
