#include <stdio.h>
main()
{
	int num,n,rem,sum =0,prod=1;
	
	printf("Enter any number :");
	scanf("%d",&num);

	
	n=num;
	while (n !=0)
	{
		rem =n % 10;
		sum = sum + rem;
		prod =prod *rem;
		n =n/10;
	}
	
	if(sum==prod)
	{
		printf("%d is a magic number\n",num);
		
	}
	
	else
	{
		printf("%d is not a magic number\n",num);
		
		
	}
}

