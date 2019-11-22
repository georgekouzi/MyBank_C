#include "myBank.h"
#include <stdio.h>

static double account[ACCOUNTSIZE][INFOSIZE]={{0.0}};


void open_account(){
int account_info=-1;

for (int i=0; i < ACCOUNTSIZE; i++)
{
    

if(account_info==-1){
    if(account[i][0]==CLOSE){

    account[i][0]=OPEN;
    account_info=i;
    printf("\nWelcom the bank your account is: %d",i+901);


  }
}

}
double depos=0.0;
printf("\nInitial deposit?:");
scanf("%lf",&depos);
 account[account_info][1]=depos;
printf("\nYour sold is %.2f",account[account_info][1]);


if(account_info==-1){
    printf("\nSorry all account are opened");
}
}


void balance_account(){

int account_number=-1;

do{
printf("\nAccount number?");
scanf("%d",&account_number);
}while(account_number<901 ||account_number >950);

if(account[account_number-901][0]==OPEN){
    printf("\nYou sold is :%.2f",account[account_number-901][1]);
}
else
{
    printf("\nSorry ,Account is closed ");
}

    
}


void deposit_account(){
    


int account_number=-1;

do{
printf("\nAccount number?");
scanf("%d",&account_number);
}while(account_number<901 ||account_number >950);


if(account[account_number-901][0]==OPEN){
double depos=0.0;
printf("\nAmount:");
scanf("%lf",&depos);
if(depos>=0){
 account[account_number-901][1]=account[account_number-901][1]+depos;
printf("\nYour sold is %.2f",account[account_number-901][1]);
}
else
{
    printf("\n Sory your input is negative");
}

}
else
{
    printf("\nSorry your account is closed");

    }


}
void money_pulling(){





int account_number=-1;

do{
printf("\nAccount number?");
scanf("%d",&account_number);
}while(account_number<901 ||account_number >950);


if(account[account_number-901][0]==OPEN){
double depos=0.0;
printf("\nAmount:");
scanf("%lf",&depos);
if(depos>=0){
    if(account[account_number-901][1]-depos>-1){
 account[account_number-901][1]=account[account_number-901][1]-depos;
printf("\nYour new  sold is %.2f",account[account_number-901][1]);
}else
{
  printf("\n Your sold isn't suffisant ");
}
}
else
{
    printf("\n Sory your input is negative");
}

}
else
{
    printf("\nSorry your account is closed");

}

}

void close_account(){


int account_number=-1;

do{
printf("\nAccount number?");
scanf("%d",&account_number);
}while(account_number<901 ||account_number >950);


if(account[account_number-901][0]==OPEN){
    account[account_number-901][0]=CLOSE;
    printf("\nYour account %d is now close",account_number);

}
else
{
    printf("\nYour account is already close ");
}



}
void interest_add(){


double interest=0.0;
do
{
    printf("\nInterest rate?:");
    scanf("%lf",&interest);
} while (interest<0||interest>1);

for (int i = 0; i < ACCOUNTSIZE; i++)
{

    if (account[i][0]==OPEN){
 double temp=account[i][1]*interest;
 account[i][1]=temp+account[i][1];
    }
}
printf("\nSucces action");


}


void print_open_accounts(){

    for (int i = 0; i < ACCOUNTSIZE; i++)
    {

           if (account[i][0]==OPEN){

printf("\nYour account %d have %.2f",i+901,account[i][1]);
           }
    }
    
}

void close_all_account_and_exits(){
for (int i = 0; i < ACCOUNTSIZE; i++)
{
    if(account[i][0]==OPEN){
    account[i][0]=CLOSE;
    printf("\nAccount %d is succcesful closed",i+901);
    }


}}

