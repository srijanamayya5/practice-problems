#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int pow_2=1<<n;
	printf("2^%d is %d",n,pow_2);
}