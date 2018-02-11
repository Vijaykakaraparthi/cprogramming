#include<stdio.h>
main()
{
int age,a;
printf("enter age");
scanf("%d",&age);
if(age>18&&age<30)
{
goto a;
}
else
printf("invalid age");
exit();
a:printf("valid age");
return 0;
}
