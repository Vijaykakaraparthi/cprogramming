#include<stdio.h>
main()
{
int h,hs,salary;
printf("enter no.of hours ");
scanf("%d",&h);
printf("enter the hourly wage salary");
scanf("%d",&hs);
if(h<=40)
{
salary=h*hs;
}
else
{
salary=(40.0*hs)+(h-40)*(hs*1.5);
}
printf("the weekly salary is %d",salary);
return 0;
}
