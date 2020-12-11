#include <stdio.h>
int main()
{
    float x,y;
    printf("请输入x=");
    scanf("%f,%f",&x,&y);
    if(x<1)y=x;
    if(x>=1&&x<10)y=2*x-1;
    if(x>=10)y=3*x-11;
    printf("y的函数值为%f",y);
    return 0;
}
    
    
    
    
    
    


