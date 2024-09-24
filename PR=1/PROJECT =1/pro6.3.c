#include<stdio.h>
main()
{
	float firstangle,secondangle,c,Thirdangle;
	printf("enter the firstangle of triangle =");
	scanf("%f",&firstangle);
	printf("enter the secondangle of triangle =");
	scanf("%f",&secondangle);
	
	c=firstangle+secondangle;
	Thirdangle=180-c;
	printf("value of Third angle is =%.2f",Thirdangle);
}