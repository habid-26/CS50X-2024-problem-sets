#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cash;
    do
    {
         cash = get_int("Change owed: ");
    }
    while (cash<0);


    int coincount=0 ;
    while(cash-25>=0)
    {
        coincount++;
        cash-=25;
    }
    while(cash-10>=0)
     {
        coincount++;
        cash-=10;
     }
    while(cash-5>=0)
    {
        coincount++;
        cash-=5;
    }
    coincount+=cash;

    printf("%i\n",coincount);


}
