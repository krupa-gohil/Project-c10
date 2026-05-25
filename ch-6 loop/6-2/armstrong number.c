#include <stdio.h>
main()
{
	int num,n,rem, sum=0;
	printf("Enter any number :");
	scanf("%d",&num);
	
	n=num;
	
	while (n!=0)
	{
		rem =n %10;
		sum=sum +(rem * rem *rem *rem);
		n= n/10;
		
	}
	if(num ==sum)
	{
		printf("%d is an armstrong number\n",num);
		
	}
	else
	{
		printf("%d is a armstrong number\n",num);
	}
}
