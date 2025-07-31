//find the occurence of digit 
#include<stdio.h>
int main()
{
	int num,n,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the number whose occurence needs to be checked: ");
	scanf("%d",&n);
	
	while(num!=0)
	{
		int temp=num%10;
		if(temp==n)
		{
			count++;
		}
		num=num/10;
	}
	printf("number of occurence: %d",count);
	
}