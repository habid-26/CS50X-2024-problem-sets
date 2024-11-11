#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int lettercount(string text);
int wordcount(string text);
int sentencecount(string text);

int main(){
    string text=get_string("Text: ");

    int c=sentencecount(text);
    int b=wordcount(text);
    int a=lettercount(text);
    float L= a/ (float) b *100;
    float S= c/(float) b *100;
    int ans=round(0.0588 * L - 0.296 * S - 15.8);
    if(ans>=16)
        printf("Grade 16+\n");
    else if(ans<1)
        printf("Before Grade 1\n");
    else
        printf("Grade %d\n",ans);
}

int lettercount(string s){
    int a=0;
    for(int i=0; i<strlen(s);i++)
    {
        if(isalpha(s[i]))
          {  a++;}
    }
    return a;
}

int wordcount(string s){
   int a=1;
    for(int i=1; i<strlen(s);i++)
    {
        if(s[i]==' ')
          {  a++;}
    }
    return a;
}

int sentencecount(string s)
{
    int a;
    a=0;
    for(int i=1; i<strlen(s);i++)
    {
        if(s[i]=='.'|| s[i]=='?' || s[i]=='!' )
        {    a++;}
    }
    return a;
}
