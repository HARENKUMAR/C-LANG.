#include<stdio.h>
main()
{
	float Fahrenheit,celsius;
	printf("Enter the temperature in Celsius:");
	scanf("%f",&celsius);
	
	Fahrenheit =(celsius*9/5)+32; 
	printf("conversation of celsius to fahrenheit is = %2.f",Fahrenheit);
	
	
}
