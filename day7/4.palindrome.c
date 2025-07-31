//palindrome
#include<stdio.h>
int main()
{
	int num,temp=0;
	printf("enter the number:");
	scanf("%d",&num);
	int a=num;
	while(num!=0)
	{
	  temp=(num%10)+(temp*10);
	  num=num/10;
	}
	if(a==temp)
		printf("its a palindrome");
	else
	 printf("its not a palindrome");
}