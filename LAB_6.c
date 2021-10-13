#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include <string.h>


int main(){
    /********************************
    int i, n, counter;
   system("cls");///clrscr();
   printf("Enter number 2-12:");
   scanf("%d",&n);

   for(counter=1;(n<2)||(n>12);counter++) {
       printf("Incorrect number please enter number 2-12:");
       scanf("%d",&n);
   }

   for(i=1;i <=12;i++){
       printf("%dx%d=%d\n",n,i,n*i);
   }
   getch();
    **/
   /**
   int i,n;
   unsigned long int result;
   system("cls");
   printf("Enter the number of operations 3-12: ");
   scanf("%d",&n);
   while(!(n>2)&&(n<13)){
       printf("Enter the number of operations again 3-12: ");
       scanf("%d",&n);
   }
   result = 1;
   for(i=1;i<=n;i++){
       result =result*i;
   }
   printf("The result of the operation is %ld\n",result);
   getch();
   **/
  /**
  int i =0;
  while(i==1){
      printf("Enter while loop\n");
  }
  printf("Exit while loop\n");
  do
  {
      printf("Enter do loop\n");
  } while (i==1);
  printf("Exit do loop\n");
  **/
 /**
 int row,col;
 system("cls");
 for (row=5;row>0;row--){
     for(col=15;col>0;col--){
         printf("X");
    printf("\n");
     }
 }
 **/
/**
int money,tax,sum_tax,real_money,round,value_round;
char name[30];
system("cls");
round = 0;
printf("How many people do you want to calculate TAX:");
scanf("%d",&value_round);
while(round < value_round){
    round++;
    printf("Enter name here: ");
    scanf("%s",name);
    printf("Enter amount here:");
    scanf("%d",&money);
    printf("Your name : %s\n",name);
    printf("Your money is %d\n",money);

     real_money = money;
     sum_tax = 0 ;
     if(money > 1000000){///case money > 1000000 mean pay tax for 3 sections of TAX
         money = money / 3;
        for (int i = 3;i>0;i--){
            if (money != real_money){
                tax = money * i * 0.1;
                sum_tax = sum_tax+tax;
                real_money = real_money - money;
            }else{
                real_money = real_money - 100000;
                tax = real_money * i * 0.1;
                sum_tax = sum_tax+tax;
                    
            }
        
        }
           
        
 
    }else if(money > 500000){
        money = money / 2;
        for (int i = 1;i<3;i++){
            if (money != real_money){
                tax = money * i * 0.1;
                sum_tax = sum_tax+tax;
                real_money = real_money - money;
                
            }else{
                    real_money = real_money - 100000;
                    tax = real_money * i * 0.1;
                    sum_tax = sum_tax+tax;
                    
            }
        }
                
    }else if(money > 100000){
        money = money - 100000;
        sum_tax = money * 0.1;
             
    }else{
        printf("NO TAX\n");
        }
    printf("your tax is :%d \n",sum_tax);
    
    
}   
    
   **/
    
    int value,ans,round;
    char message[20];
    system("cls");
    
   srand(time(NULL));
   value = rand() %  100;
   ///printf("%d\n",value);
   printf("Insert guess number here 0-99:");
   scanf("%d",&ans);
   
   for (round = 1; round <= 4;round++){
        
       if (ans == value ){
           strcpy(message,"You are win");
           break;
       }else{
           if (ans > value){
               printf("Too high\n");
           }else{
               printf("Too Low\n");
           }
           printf("Please try again\n");
           printf("Insert guess number here 0-99:");
           scanf("%d",&ans);
           strcpy(message,"You Lose");

       }
      
   }
   printf("%s The answer is : %d",message,value);
    
   
    



        
               
                

                               


    
    

              
        
        
        
    return 0;



}
    



