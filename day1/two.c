//program for area of circle

#include<stdio.h>
#define pi 3.14

int main()
{
	int r;
	float area;
	printf("enter radius\n");
	scanf("%d",&r);
	
	area=pi*r*r;
	printf("Area of circle of radius %d is=%f",r,area);
	
}