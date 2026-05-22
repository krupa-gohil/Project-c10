#include <stdio.h>

main()
{
	int n=934;
	int rem,rev=0;
	//while loop number ko ulta karne ke liye 
	while(n !=0)
	{
		rem =n%10;
		rev=rev* 10+ rem;
		n=n/10;
	}
	//ulti hui sankhya ko printf karne ke liye 
	printf("output :  %d",rev);
	
}
