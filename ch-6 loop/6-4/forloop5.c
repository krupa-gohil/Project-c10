#include <stdio.h>

main()
{
	int n, rem, rev =0;
	
	//  for loop number ko ulta karne ke liye 
	for (n=934; n !=0; n=n/10)
	{
		rem =n%10;
		rev=rev* 10+ rem;
		
	}
	
	//ulti hui sankhya ko printf karne ke liye 
	printf("output :  %d",rev);
	
}
