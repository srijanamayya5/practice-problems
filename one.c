//program to convert uppercase into lowercase
#include<stdio.h>

int main()
{
    char uppercase[30]="", lowercase[30]="";
    int i;
    printf("Enter a word in UPPERCASE:\n");
    scanf("%s",&uppercase);

    while(uppercase[i]!='\0')
    {
        lowercase[i]=uppercase[i]+32;
    }

    printf("Lowercase: %s", lowercase);
    
}