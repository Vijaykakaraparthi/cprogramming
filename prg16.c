#include <stdio.h>


int main()

{
   
int atmnum=12345;
   
int pin=548,ch,choice,atmpin;
   
int amount=100000,value;
   
printf("enter the pin ");
   
scanf("%d",&atmpin);
   
if(pin==atmpin)
    
{
        
do
{
            
printf("\nchoose the following option\n1.balance check\n2.cash withdrawl\n3.cash deposition\n4.exit\n ");
            
scanf("%d",&ch);
            
switch(ch)
            
{
                
case 1:
                 
printf("balance: %d",amount);
                 
break;
                
case 2:
                  
printf("enter the amount to withdraw");
                  
scanf("%d",&value);
                  
amount=amount-value;
                  
printf("balance amount: %d\n",amount);
                  
break;
                
case 3:
                  
printf("cash amount to deposit");
                  
scanf("%d",&value);
                  
amount=amount+value;
                  
printf("balance amount : %d",amount);
                
default :
                  
exit(0);
            
}
        
}while(choice=1);
        
printf("press 1 to contine and 0 to exit");
        
scanf("%d",&choice);
        
}
    

}
