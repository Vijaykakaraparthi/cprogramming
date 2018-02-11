#include<stdio.h>
main()
{
int a;
float b;
char c;
printf("\nenter a integer value");
scanf("%d",&a);
printf("\nenter a float value");
scanf("%f",&b);
printf("\nenter a char value");
scanf("%s",&c);
printf("\nfloat to int is:%d",(int)b);
printf("\nint to float is :%f",(float)a);
printf("\nchar to int is : %d",(int)c);
return 0;
}