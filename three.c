//program to convert celsius to fahrenheit
//program for area of circle

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char char1,char2;
	int i;
	
	printf("Enter the character, char1= ");
	scanf("%c",&char1);
	
	printf("Enter the character, char2= ");
	scanf(" %c",&char2);
	
	i=abs(char2-char1-1);
	
	printf("\n number of character between two characters are: %d",i);
}