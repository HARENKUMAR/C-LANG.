#include<stdio.h>

int main()

{
	int Marks;
	char Grade;
	
	printf("Enter Your Score out of 100 Marks = ");
	scanf("%d",&Marks);
	
    Grade =(Marks>=90)?
	       'A':
	       	(Marks>=80)?
	       'B':
	       	(Marks>=70)?
	       'C':
	       	(Marks>=60)?
	       'D':
	       	(Marks>=50)?
	       'E':
	       	(Marks<=40)?
	       'F':
	       	
	printf("Your Grade is %c",Grade);  
	
	
	switch(Grade)
	{
		case 'A':
			printf(" Excellent work!!!!");
			break;
		case 'B':
			printf("Well done!!!!");
			break;
		case 'C':
			printf("Good job!!!!");
			break;
		case 'D':
			printf("You passed but you could do better!!!!");
			break;
		case 'E':
			printf("You passes but you need more learning!!!!");
			break;
		case 'F':
			printf("Sorry, you failed!!!!");
			break;	
		default:
		    printf("Enter a valid Grade!!!!");		
	 }
	 
	 
	    if(Grade=='A'|| Grade=='B'|| Grade=='C'|| Grade=='D'|| Grade=='E')
	    {
	    	printf("You are Eligible for the Next level.");
		}
		else
		{
			printf("Please try again next time");
		}
		
		return 0;
}