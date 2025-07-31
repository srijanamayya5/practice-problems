#include<stdio.h>
#include<ctype.h>

int main()
{
	int variable;
	printf("enter\n");
	scanf("%d",&variable);
	if(isdigit(variable))
		printf("its a digit");
	else
	 printf("not digit");
}