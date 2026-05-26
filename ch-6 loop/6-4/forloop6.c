#include <stdio.h>
main()
{
	int num ,n,rem,rev =0;
	
	printf("Enter any number :");
	scanf("%d",&num);
	
	n=num;
	
	for( n=num; n!=0 ; n=n/10)
	{
		rem =n%10;
		rev=rev * 10 +rem;
		n=n/10;
	}
	if(num==rev)
	{
		printf("%d is a palindrome number\n",num);
	}
	else
	{
		printf("%d is not a palindrome number\n",num);
	}
}
