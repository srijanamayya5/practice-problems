//reverse the number

#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	int a=num;
	int temp=0;
	
	while(num!=0)
	{
	  temp=(num%10)+(temp*10);
	  num=num/10;
	}
	printf("reverse of %d is %d",a,temp);
	return 0;
}