#include<stdio.h>
main()
{
char name[100],adres[100];
int age;
float hg;
printf("enter name,address,age,hg");
scanf("%s%s%d%f",&name,&adres,&age,&hg);
printf("name:%s\naddress:%s\nage:%d\nheight:%f\n",name,adres,age,hg);
return 0;
}