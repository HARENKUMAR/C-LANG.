#include<stdio.h>
main()
{
	float mainsalary,hra,da,ta,GrossSalary;
	printf("enter the main salary of employ =");
	scanf("%f",&mainsalary);
	printf("enter the hra of employ =%");
	scanf("%f",&hra);
	printf("enter the da of employ =%");
	scanf("%f",&da);
	printf("enter the ta of employ =%");
	scanf("%f",&ta);
	
	hra=mainsalary*hra/100;
	da=mainsalary*da/100;
	ta=mainsalary*ta/100;
	
	GrossSalary=hra+da+ta+mainsalary;
	
	printf("your Gross Salary is = %.2f",GrossSalary);
	
	
	
}