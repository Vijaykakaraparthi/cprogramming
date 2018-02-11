#include<stdioo.h>
main()
{
int h,m;
printf("enter no.of minutes");
scanf("%d",&m);
if(m>60)
{
h=m/60;
m=m%60;
}
printf("hours:%d min:%d ",h,m);
return 0;
}