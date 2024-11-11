#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int arr[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int fun(string word);

int main(void)
{
    string s1 = get_string("Player 1: ");
    string s2 = get_string("Player 2: ");

    int score1 = fun(s1);
    int score2 = fun(s2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int fun(string word)
{
    int total = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        char ch = toupper(word[i]);


            if (isalpha(ch))
                 {
              total += arr[ch - 'A'];
        }
    }

    return total;
}
