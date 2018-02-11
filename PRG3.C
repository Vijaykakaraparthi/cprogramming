#include<stdio.h>
main()
{
int n,i,a[20],sum=0,p;
printf("the no of values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter values");
scanf("%d",&a[i]);
}
p=a[0];
for(i=0;i<n;i++)
{
sum=sum+a[i];
if(p<a[i])
{
p=a[i];
}
}
printf("\nthe values %d",sum);
printf("\nthe greatest value is %d",p);
return 0;
}