#include <stdio.h>
   main()
   
   
{
	int choice ,subchoice;
	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");	
	printf("press 3 for Gujarati\n\n");
	printf("Enter your choise :");
	scanf("%d", &choice);
	
	switch (choice)
{

		case 1:
		printf("\npress 1 for Internet Recharge\n");
		printf("press 2 for top-up Recharge\n");
		printf("press 3 for Special Recharge\n");
		printf("Enter your choice :");
		scanf("%d",&subchoice);

            switch(subchoice)
			
        {
        	case 1:
        	printf("\nYou have Successfuliy done an Internet Recharge.\n");
        	
        	break;
        	
        	case 2:
            printf("\nYou have Successfuliy done a Top-up Internet Recharge.\n");
			
			break;
			
			case 3:
			printf("\nYou have Successfuliy done a Special Internet Recharge.\n");
			
			default:
			printf("\nInvalid choice !\n");
			
			break;
    	}
	


		case 2:
			printf("\nInternet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye  2 dabaiye\n");
			printf("Special Recharge ke liye ke liye 3 dabaiye\n");
			printf("Enter your choice :");
			scanf("%d",&subchoice);

					
		       switch(subchoice)
		{
		     	case 1:
			printf("\nAapne safaltapurvak Internet Recharge kar liya he.\n");
			
			break;
			
		     	case 2:
			printf("\nAapne safaltapurvak Top-up Internet Recharge kar liya he.\n");
				
			break;
			
			    case 3:
			printf("\nAapne safaltapurvak Special Internet Recharge kar liya he.\n");
			
			break;
			
		    	default:
			printf("\nInvalid choice !\n");
			
			break;
		
		}
		
		case 3 :
		printf("\nInternet recharge mate 1 dabavo\n");
		printf("Top-up recharge mate 2 dabavo\n");
		printf("Special recharge mate 3 dabavo\n");
		scanf("%d",&subchoice);
		
	    	switch(subchoice)
		{
			case 1:
			printf("\nTame safaltapurvak Internet Recharge karyu chhe.\n");
			
			break;
			
			case 2:
			printf("\nTame safaltapurvak Top-up Recharge karyu chhe.\n");
			
			break;	
			
			case 3:
		    printf("\nTame safaltapurvak Special Recharge karyu chhe.\n");
			
			break;
			
			default :
			printf("\nInvalid choice ! please restart the program.\n");	
				
			}	
     }
}
		
						
				
        	

		
     		
			
		  	
	
	
  
