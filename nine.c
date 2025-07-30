#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0)); 
	int r1=rand();
	int r2=rand();
	
	int sum=r1+r2;
	
	printf("sum of %d and %d is =%d",r1,r2,sum);
}