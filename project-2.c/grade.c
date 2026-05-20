#include <stdio.h>

main()
{
	int marks;
	char grade;
	
	printf("Enter your score :");
	scanf("%d",&marks);
	grade =(marks >= 90) ? 'A' :
           (marks >= 80) ? 'B' :
           (marks >= 70) ? 'C' :
           (marks >= 60) ? 'D' : 
     'F';      
	
	switch(grade)
	{
		case 'A':
		printf("Excellent work!");
		break;
		
		case 'B':
		printf("Well done .");
		break;
		
		case 'C':
		printf("Good job .");
		break;
		
		case 'D':
		printf("YOU passed, but you could do better .");
		break;
		
		case 'F':
		printf("Sorry, you failed .");
		break;	
		}	
		
		if(grade != 'F')
		
		printf("You are eligible for the next level.\n");
		
		else
		{
			printf("please try again next time.\n");
		}
}
