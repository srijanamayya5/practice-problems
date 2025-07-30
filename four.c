//program to convert celsius to fahrenhiet

#include<stdio.h>

int main()
{
	float celsius, fahrenheit;
	printf("Enter the Temperature in Celcius: \n");
	scanf("%f",&celsius);
	
	fahrenheit=(celsius*1.8)+32;
	
	printf("Fahrenheit value: %f",fahrenheit);
}