#include<stdio.h>
#include<conio.h>
main()
{
int h,m,s;
a:printf("enter a valid time");
printf("\nenter time");
scanf("%d%d%d",&h,&m,&s);
if(h>=0&&h<24&&m>=1&&m<60&&s>=0&&s<=60)
{
printf("\nthe time in 24 format is %d:%d:%d\n",h,m,s);
}
else
goto a;
return 0;
}
