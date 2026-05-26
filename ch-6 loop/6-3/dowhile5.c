#include <stdio.h>

main()
{
	int n=934;
	int rem,rev=0;
	// do  while loop number ko ulta karne ke liye 
    do
	{
		rem =n%10;
		rev=rev* 10+ rem;
		n=n/10;
	}	while(n !=0);
		
	//ulti hui sankhya ko printf karne ke liye 
	printf("output :  %d",rev);
	
}
