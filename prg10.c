#include <stdio.h>
#include <string.h>
 
void main()
{
    int h,m,min=0;
    printf("enter the hours and min");
    scanf("%d%d",&h,&m);
    min=h*60+m;
    printf("the total min are %d",min);
    
    
}