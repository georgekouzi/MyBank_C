#include <stdio.h>
#include "myBank.h"

int main(int argc, char const *argv[])
{
    
    char current;

while(current!='E'){


printf("\nTransaction type?:");
current=getchar();

if(current=='O'){
    open_account();
}

if(current=='B'){
  balance_account();
}

if(current=='D'){
deposit_account();
}


if(current=='W'){
    money_pulling();
}


if(current=='C'){
close_account();
}


if(current=='I'){
interest_add();}


if(current=='P'){
    print_open_accounts();
}

if(current=='E'){
    close_all_account_and_exits();
}



if(current!='O'||current!='B'||current!='D'||current!='W'||current!='c'||current!='I'||current!='P'||current=='E'){
    
    getchar();
}


}




    return 0;
}
