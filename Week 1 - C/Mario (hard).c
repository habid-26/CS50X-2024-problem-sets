#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
   do
    {
         n = get_int("Height: ");
    }
    while ( n < 1 || n > 8);

    int k=n;
    int p=1;
    while(n--)
    {
        for(int i=1 ; i<= n; i++)
            printf(" ");

        for(int j=n ; j<k;j++)
            printf("#");
        printf("  ");
        for(int i=0 ; i<p;i++)
            printf("#");
        p++;
        printf("\n");
    }
}
