//finding sum of 5 digit number

#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter 5 digit number\n");
	scanf("%d",&num);
	
	int count=0;
	while(num!=0) //logic to find sum
	{
		sum=(num%10)+sum;
		num=num/10;
		count++;
	}
	if(count==5)//checking if num is 5 digit
		printf("The sum of 5 digit number is=%d",sum);
	else
		printf("given number is not 5 digit number but, the sum is %d",sum);
	return 0;
}