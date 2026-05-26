#include <stdio.h>
main()
{
	int num ,n,rem,rev =0;
	
	printf("Enter any number :");
	scanf("%d",&num);
	
	n=num;
	
	
	do
	{
		rem =n%10;
		rev=rev * 10 +rem;
		n=n/10;
	}while (n !=0);
	
	
	if(num==rev)
	{
		printf("%d is a palindrome number\n",num);
	}
	else
	{
		printf("%d is not a palindrome number\n",num);
	}
}
