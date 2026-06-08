#include <stdio.h>
main()
{
	int n,f,l,s;
	
	printf("Enter number :");
	scanf("%d",&n);
	// last digit
	
	l=n% 10;
	f=n;
	
	while(f >= 10)
	{
		f = f/10;
		
	}
	s= f+l;
	
	printf("Sum is : %d",s);
}

