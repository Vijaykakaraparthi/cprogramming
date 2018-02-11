#include<stdio.h>
#include<stdlib.h>
int age;
int op,m1,m2,m3,m4,m5,m6;
char name[10],adres[10],gmail[10],skills[20],aofi[20],hobbies[20],phno[10],dob[10];
main()
{
	while(1)
	{
	printf("enter your choice");
	printf("\n1)personaldetails\n2)Educationdetails\n3)areaofinterest\n4)display\n5)exit");
	scanf("%d",&op);
	
	
	switch(op)
	{
	
		case 1: personaldetails();
		        break;
		case 2: educationdetails();
	     		break;
		case 3: areaofinterest();
		       	break;
		case 4:display();
				break;
		case 5:exit(0);
				       	
	}
}


}
int personaldetails()
{ 
	printf("\n1)enter name");
	scanf("%s",name);
	printf("\n2)enter age");
	scanf("%d",&age);
	printf("\n3)enter address");
	scanf("%s",adres);
	printf("\n4)enter gmail");
	scanf("%s",gmail);
	printf("\n5)enter date of birth");
	scanf("%s",dob);
	printf("\n6)enter phonenumber");
	scanf("%s",phno);
}
int educationdetails()
{
	printf("\n enter 10th marks");
	scanf("%d",&m1);
	printf("\nenter inter marks 1st year: and 2nd year: ");
	scanf("%d%d",&m2,&m3);
	printf("\nenter btech marks 1)1st year 2)2nd year 3)3rd year");
	scanf("%d%d%d",&m4,&m5,&m6);
}
int areaofinterest()
{
printf("\nhobbies");
scanf("%s",hobbies);
printf("\n area of interest");
scanf("%s",aofi);
printf("\nenter your skills");
scanf("%s",skills);
}
display()
{
		printf("\n\n\nname:%s\nage:%d\naddress:%s\ngmail:%s\ndateofbirth:%s\nphonenum:%s",name,age,adres,gmail,dob,phno);
		printf("\n\n\n10th marks:%d\ninter marks 1styear:%d\n 2nd year:%d\n btech marks 1st year:%d\n 2nd year:%d\n 3rd year:%d\n\n",m1,m2,m3,m4,m5,m6);
		printf("\nthe sum of btech marks is:%d",(m4+m5+m6)/3);
		printf("\n\nHobbies:%s\n area of intrest:%s\n skills:%s\n",hobbies,aofi,skills);
		
}
