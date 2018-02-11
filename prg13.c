#include<stdio.h>
main()
{
int n,m[10],a,i,count=0;
printf("enter a value");
scanf("%d",&n);
if(n!=0)
{
    for(i=0;i<4;i++)
    {
        m[i]=n%2;
        n=n/2;
        
        if(m[i]==0)
        {
            count++;
    
        }
    }
    
}
for(i=0;i<4;i++)
{
    printf("%d",m[i]);
}
printf("zeros is %d",count);
}