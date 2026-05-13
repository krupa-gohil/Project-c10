#include <stdio.h>

main()
{
	int num;
	
	printf("Enter any number :");
	scanf ("%d", &num);
	
	if(num <0)
	printf("This number is negative\n");
	
    else if(num == 0)
    printf("This number is neutral\n");
    
    else
    printf("This number is positive\n");
    
	

}
