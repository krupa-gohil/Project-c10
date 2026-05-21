
#include<stdio.h>

main()
{
	 printf("---------------------------------------------------\n");
	printf("------        Movie Ticket Booking           ------\n");
	printf("---------------------------------------------------\n\n");
	
	
	printf("press 1 for hollwood\n");
    printf("press 2 for Bollwood\n");
    printf("press 3 for Tollwood\n");
  	printf("press 4 for Gujarati\n");
  	
    char choice1;
            printf("\n");
            printf("Enter your choice : ");
            scanf("%c" , &choice1 );
            printf("\n");
      
    switch(choice1)
      
    {
	 
            case '1':
          	
          	printf("------ wellcome To Hollwood ------\n");
          	printf(" press a  For comady\n");
          	printf(" press b  For romentic\n");
          	printf(" press c  For Horoor\n");
          	printf(" press d  For Action\n");
          	
          	
    char choice2;
                 printf("\n");
                 printf("Enter your choice : ");
                 scanf(" %c" , &choice2);
          	     printf("\n");
    switch(choice2)
    
    {
	 
              case'a':
            
               printf("------- wellcome To Comady movie -------\n\n");
               
               printf("press a  For The Hangover\n");
               printf("press b  For superbad\n");
               printf("press c  For Dumb and Dumber\n");
               printf("press d  For White Chicks\n");
        
    char choice3;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice3);
                    printf("\n");
		switch(choice3)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- The Hangover Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice4;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice4);
                    printf("\n");
                    
        switch(choice4)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice5;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice5);
                    printf("\n");
        
		switch(choice5)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----The Hangover Movie Price Rs.145-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 145;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Hangover Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice6;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice6);
                    printf("\n");
        
		switch(choice6)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Hangover Movie Price Rs.145-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 145;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Hangover Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- superbad Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice7;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice7);
                    printf("\n");
                    
        switch(choice7)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice8;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice8);
                    printf("\n");
        
		switch(choice8)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("-----Superbad Movie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Superbad Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice9;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice9);
                    printf("\n");
        
		switch(choice9)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----Superbad Movie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Superbad Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- Dumb and Dumber Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice10;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice10);
                    printf("\n");
                    
        switch(choice10)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice11;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice11);
                    printf("\n");
        
		switch(choice11)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Dumb and DumberMovie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Dumb and Dumber Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice12;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice12);
                    printf("\n");
        
		switch(choice12)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Dumb and Dumber Movie Price Rs.128-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 128;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Dumb and Dumber Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- White Chicks Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice13;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice13);
                    printf("\n");
                    
        switch(choice13)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice14;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice14);
                    printf("\n");
        
		switch(choice14)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- White Chicks Movie Price Rs.100-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 100;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" White Chicks Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice15;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice15);
                    printf("\n");
        
		switch(choice15)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- White Chicks Movie Price Rs.100-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *100;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" White Chicks Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
            
            
            
            
            
            
            
            
            
            
            
      case'b':
            
               printf("------- wellcome To Romantic movie -------\n\n");
               
               printf("press a  For Titanic\n");
               printf("press b  For The Notebook\n");
               printf("press c  For The vow\n");
               printf("press d  For The vow 2\n");
        
    char choice16;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice16);
                    printf("\n");
		switch(choice16)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- Titanic Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice17;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice17);
                    printf("\n");
                    
        switch(choice17)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice18;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice18);
                    printf("\n");
        
		switch(choice18)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Titanic Movie Price Rs.450-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 450;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Titanic Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice19;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice19);
                    printf("\n");
        
		switch(choice19)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Titanic Movie Price Rs.450-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 450;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Titanic Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Notebook Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice20;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice20);
                    printf("\n");
                    
        switch(choice20)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice21;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice21);
                    printf("\n");
        
		switch(choice21)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("----- The Notebook Movie Price Rs.350-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 350;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The Notebook Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice22;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice22);
                    printf("\n");
        
		switch(choice22)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The Notebook Movie Price Rs.250-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 250;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Notebook Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- The vow Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice23;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice23);
                    printf("\n");
                    
        switch(choice23)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice24;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice24);
                    printf("\n");
        
		switch(choice24)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The vow Price Rs.255-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 255;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The vow Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice25;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice25);
                    printf("\n");
        
		switch(choice25)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The vow Movie Price Rs.324-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 324;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The vow Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- The vow 2 Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice26;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice26);
                    printf("\n");
                    
        switch(choice26)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice27;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice27);
                    printf("\n");
        
		switch(choice27)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----  The vow 2 Movie Price Rs.145-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 145;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The vow 2 Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice28;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice28);
                    printf("\n");
        
		switch(choice28)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----  The vow 2 Movie Price Rs.145-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *145;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The vow 2 Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }

     
    
    
    
    
    
    
    
    case'c':
            
               printf("------- wellcome To Horoor movie -------\n\n");
               
               printf("press a  For The Shining\n");
               printf("press b  For The Conjuring\n");
               printf("press c  For The Exorcist\n");
               printf("press d  For Alien\n");
        
    char choice29;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice29);
                    printf("\n");
		switch(choice29)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- The Shining Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice30;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice30);
                    printf("\n");
                    
        switch(choice30)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice31;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice31);
                    printf("\n");
        
		switch(choice31)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----The Shining Movie Price Rs.100-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 100;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Shining Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice32;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice32);
                    printf("\n");
        
		switch(choice32)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Shining Movie Price Rs.123-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 123;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Shining Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Conjuring Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice33;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice33);
                    printf("\n");
                    
        switch(choice33)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice34;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice34);
                    printf("\n");
        
		switch(choice34)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("-----The Conjuring Movie Price Rs.134-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 134;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Conjuring Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice35;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice35);
                    printf("\n");
        
		switch(choice35)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Conjuring Movie Price Rs.167-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 167;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Conjuring Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- The Exorcist Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice36;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice36);
                    printf("\n");
                    
        switch(choice36)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice37;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice37);
                    printf("\n");
        
		switch(choice37)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The Exorcist Movie Price Rs.178-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 178;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Exorcist Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice38;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice38);
                    printf("\n");
        
		switch(choice38)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The Exorcist Movie Price Rs.134-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 134;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Exorcist Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- Alien Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice39;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice39);
                    printf("\n");
                    
        switch(choice39)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice40;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice40);
                    printf("\n");
        
		switch(choice40)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Alien Movie Price Rs.108 -----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 108;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Alien Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice41;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice41);
                    printf("\n");
        
		switch(choice41)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Alien Movie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Alien Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
            
       
       
       
       
       
       
       
       
       
       
       case'd':
            
               printf("------- wellcome To Action movie -------\n\n");
               
               printf("press a  For Die Hard\n");
               printf("press b  For The Dark Knight\n");
               printf("press c  For Aliens\n");
               printf("press d  For The Matrix\n");
        
    char choice42;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice42);
                    printf("\n");
		switch(choice42)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- Die Hard Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice43;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice43);
                    printf("\n");
                    
        switch(choice43)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice44;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice44);
                    printf("\n");
        
		switch(choice44)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Die Hard Movie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Die Hard Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice45;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice45);
                    printf("\n");
        
		switch(choice45)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Die Hard Movie Price Rs.165-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 165;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Shining Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Dark Knight Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice46;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice46);
                    printf("\n");
                    
        switch(choice46)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice47;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice47);
                    printf("\n");
        
		switch(choice47)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("----- The Dark Knight Movie Price Rs.143-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 143;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Dark Knight Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice48;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice48);
                    printf("\n");
        
		switch(choice48)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Dark Knight Movie Price Rs.176-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 176;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Dark Knight Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- Aliens Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice49;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice49);
                    printf("\n");
                    
        switch(choice49)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice50;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice50);
                    printf("\n");
        
		switch(choice50)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Aliens Movie Price Rs.178-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 178;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Aliens Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice51;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice51);
                    printf("\n");
        
		switch(choice51)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Aliens Movie Price Rs.134-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 134;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Exorcist Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- The Matrix Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice52;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice52);
                    printf("\n");
                    
        switch(choice52)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice53;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice53);
                    printf("\n");
        
		switch(choice53)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The Matrix Price Rs.108 -----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 108;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The Matrix Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice54;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice54);
                    printf("\n");
        
		switch(choice54)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The MatrixMovie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Matrix Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
                    
}
       
       
        break;
       
       
       
       
       
       
       
       
    
          	
        
			   
               case '2':
          	
          	printf("------ wellcome To Hollwood ------\n");
          	printf(" press a  For comady\n");
          	printf(" press b  For romentic\n");
          	printf(" press c  For Horoor\n");
          	printf(" press d  For Action\n");
          	
          	
    char choice66;
                 printf("\n");
                 printf("Enter your choice : ");
                 scanf(" %c" , &choice66);
          	     printf("\n");
    switch(choice66)
    
    {
	 
              case'a':
            
               printf("------- wellcome To Comady movie -------\n\n");
               
               printf("press a  For The Hangover\n");
               printf("press b  For superbad\n");
               printf("press c  For Dumb and Dumber\n");
               printf("press d  For White Chicks\n");
        
    char choice3;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice3);
                    printf("\n");
		switch(choice3)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- The Hangover Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice4;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice4);
                    printf("\n");
                    
        switch(choice4)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice5;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice5);
                    printf("\n");
        
		switch(choice5)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----The Hangover Movie Price Rs.145-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 145;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Hangover Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice6;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice6);
                    printf("\n");
        
		switch(choice6)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Hangover Movie Price Rs.145-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 145;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Hangover Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- superbad Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice7;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice7);
                    printf("\n");
                    
        switch(choice7)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice8;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice8);
                    printf("\n");
        
		switch(choice8)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("-----Superbad Movie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Superbad Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice9;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice9);
                    printf("\n");
        
		switch(choice9)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----Superbad Movie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Superbad Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- Dumb and Dumber Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice10;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice10);
                    printf("\n");
                    
        switch(choice10)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice11;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice11);
                    printf("\n");
        
		switch(choice11)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Dumb and DumberMovie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Dumb and Dumber Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice12;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice12);
                    printf("\n");
        
		switch(choice12)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Dumb and Dumber Movie Price Rs.128-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 128;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Dumb and Dumber Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- White Chicks Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice13;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice13);
                    printf("\n");
                    
        switch(choice13)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice14;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice14);
                    printf("\n");
        
		switch(choice14)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- White Chicks Movie Price Rs.100-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 100;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" White Chicks Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice15;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice15);
                    printf("\n");
        
		switch(choice15)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- White Chicks Movie Price Rs.100-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *100;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" White Chicks Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
            
            
            
            
            
            
            
            
            
            
            
      case'b':
            
               printf("------- wellcome To Romantic movie -------\n\n");
               
               printf("press a  For Titanic\n");
               printf("press b  For The Notebook\n");
               printf("press c  For The vow\n");
               printf("press d  For The vow 2\n");
        
    char choice16;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice16);
                    printf("\n");
		switch(choice16)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- Titanic Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice17;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice17);
                    printf("\n");
                    
        switch(choice17)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice18;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice18);
                    printf("\n");
        
		switch(choice18)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Titanic Movie Price Rs.450-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 450;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Titanic Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice19;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice19);
                    printf("\n");
        
		switch(choice19)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Titanic Movie Price Rs.450-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 450;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Titanic Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Notebook Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice20;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice20);
                    printf("\n");
                    
        switch(choice20)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice21;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice21);
                    printf("\n");
        
		switch(choice21)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("----- The Notebook Movie Price Rs.350-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 350;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The Notebook Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice22;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice22);
                    printf("\n");
        
		switch(choice22)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The Notebook Movie Price Rs.250-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 250;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Notebook Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- The vow Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice23;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice23);
                    printf("\n");
                    
        switch(choice23)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice24;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice24);
                    printf("\n");
        
		switch(choice24)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The vow Price Rs.255-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 255;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The vow Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice25;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice25);
                    printf("\n");
        
		switch(choice25)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The vow Movie Price Rs.324-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 324;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The vow Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- The vow 2 Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice26;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice26);
                    printf("\n");
                    
        switch(choice26)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice27;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice27);
                    printf("\n");
        
		switch(choice27)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----  The vow 2 Movie Price Rs.145-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 145;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The vow 2 Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice28;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice28);
                    printf("\n");
        
		switch(choice28)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----  The vow 2 Movie Price Rs.145-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *145;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The vow 2 Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }

     
    
    
    
    
    
    
    
    case'c':
            
               printf("------- wellcome To Horoor movie -------\n\n");
               
               printf("press a  For The Shining\n");
               printf("press b  For The Conjuring\n");
               printf("press c  For The Exorcist\n");
               printf("press d  For Alien\n");
        
    char choice29;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice29);
                    printf("\n");
		switch(choice29)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- The Shining Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice30;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice30);
                    printf("\n");
                    
        switch(choice30)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice31;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice31);
                    printf("\n");
        
		switch(choice31)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----The Shining Movie Price Rs.100-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 100;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Shining Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice32;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice32);
                    printf("\n");
        
		switch(choice32)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Shining Movie Price Rs.123-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 123;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Shining Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Conjuring Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice33;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice33);
                    printf("\n");
                    
        switch(choice33)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice34;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice34);
                    printf("\n");
        
		switch(choice34)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("-----The Conjuring Movie Price Rs.134-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 134;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Conjuring Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice35;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice35);
                    printf("\n");
        
		switch(choice35)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Conjuring Movie Price Rs.167-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 167;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Conjuring Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- The Exorcist Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice36;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice36);
                    printf("\n");
                    
        switch(choice36)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice37;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice37);
                    printf("\n");
        
		switch(choice37)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The Exorcist Movie Price Rs.178-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 178;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Exorcist Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice38;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice38);
                    printf("\n");
        
		switch(choice38)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The Exorcist Movie Price Rs.134-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 134;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Exorcist Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- Alien Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice39;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice39);
                    printf("\n");
                    
        switch(choice39)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice40;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice40);
                    printf("\n");
        
		switch(choice40)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Alien Movie Price Rs.108 -----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 108;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Alien Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice41;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice41);
                    printf("\n");
        
		switch(choice41)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Alien Movie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Alien Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
            
       
       
       
       
       
       
       
       
       
       
       case'd':
            
               printf("------- wellcome To Action movie -------\n\n");
               
               printf("press a  For Die Hard\n");
               printf("press b  For The Dark Knight\n");
               printf("press c  For Aliens\n");
               printf("press d  For The Matrix\n");
        
    char choice42;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice42);
                    printf("\n");
		switch(choice42)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- Die Hard Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice43;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice43);
                    printf("\n");
                    
        switch(choice43)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice44;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice44);
                    printf("\n");
        
		switch(choice44)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Die Hard Movie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Die Hard Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice45;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice45);
                    printf("\n");
        
		switch(choice45)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Die Hard Movie Price Rs.165-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 165;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Shining Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Dark Knight Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice46;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice46);
                    printf("\n");
                    
        switch(choice46)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice47;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice47);
                    printf("\n");
        
		switch(choice47)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("----- The Dark Knight Movie Price Rs.143-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 143;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Dark Knight Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice48;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice48);
                    printf("\n");
        
		switch(choice48)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Dark Knight Movie Price Rs.176-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 176;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Dark Knight Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- Aliens Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice49;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice49);
                    printf("\n");
                    
        switch(choice49)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice50;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice50);
                    printf("\n");
        
		switch(choice50)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Aliens Movie Price Rs.178-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 178;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Aliens Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice51;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice51);
                    printf("\n");
        
		switch(choice51)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Aliens Movie Price Rs.134-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 134;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Exorcist Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- The Matrix Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice52;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice52);
                    printf("\n");
                    
        switch(choice52)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice53;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice53);
                    printf("\n");
        
		switch(choice53)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The Matrix Price Rs.108 -----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 108;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The Matrix Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice54;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice54);
                    printf("\n");
        
		switch(choice54)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The MatrixMovie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Matrix Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
                    
}
        break;
                 
                 
                  
        
        
        
        
        
        
           case '3':
          	
          	
          	
          	
          	printf("------ wellcome To Tollwood ------\n");
          	printf(" press a  For comady\n");
          	printf(" press b  For romentic\n");
          	printf(" press c  For Horoor\n");
          	printf(" press d  For Action\n");
          	
          	
    char choice56;
                 printf("\n");
                 printf("Enter your choice : ");
                 scanf(" %c" , &choice56);
          	     printf("\n");
    switch(choice56)
    
    {
	 
              case'a':
            
               printf("------- wellcome To Comady movie -------\n\n");
               
               printf("press a  For The Hangover\n");
               printf("press b  For superbad\n");
               printf("press c  For Dumb and Dumber\n");
               printf("press d  For White Chicks\n");
        
    char choice3;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice3);
                    printf("\n");
		switch(choice3)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- The Hangover Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice4;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice4);
                    printf("\n");
                    
        switch(choice4)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice5;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice5);
                    printf("\n");
        
		switch(choice5)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----The Hangover Movie Price Rs.145-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 145;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Hangover Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice6;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice6);
                    printf("\n");
        
		switch(choice6)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Hangover Movie Price Rs.145-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 145;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Hangover Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- superbad Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice7;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice7);
                    printf("\n");
                    
        switch(choice7)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice8;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice8);
                    printf("\n");
        
		switch(choice8)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("-----Superbad Movie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Superbad Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice9;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice9);
                    printf("\n");
        
		switch(choice9)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----Superbad Movie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Superbad Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- Dumb and Dumber Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice10;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice10);
                    printf("\n");
                    
        switch(choice10)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice11;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice11);
                    printf("\n");
        
		switch(choice11)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Dumb and DumberMovie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Dumb and Dumber Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice12;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice12);
                    printf("\n");
        
		switch(choice12)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Dumb and Dumber Movie Price Rs.128-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 128;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Dumb and Dumber Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- White Chicks Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice13;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice13);
                    printf("\n");
                    
        switch(choice13)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice14;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice14);
                    printf("\n");
        
		switch(choice14)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- White Chicks Movie Price Rs.100-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 100;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" White Chicks Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice15;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice15);
                    printf("\n");
        
		switch(choice15)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- White Chicks Movie Price Rs.100-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *100;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" White Chicks Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
            
            
            
            
            
            
            
            
            
            
            
      case'b':
            
               printf("------- wellcome To Romantic movie -------\n\n");
               
               printf("press a  For Titanic\n");
               printf("press b  For The Notebook\n");
               printf("press c  For The vow\n");
               printf("press d  For The vow 2\n");
        
    char choice16;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice16);
                    printf("\n");
		switch(choice16)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- Titanic Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice17;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice17);
                    printf("\n");
                    
        switch(choice17)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice18;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice18);
                    printf("\n");
        
		switch(choice18)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Titanic Movie Price Rs.450-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 450;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Titanic Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice19;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice19);
                    printf("\n");
        
		switch(choice19)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Titanic Movie Price Rs.450-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 450;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Titanic Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Notebook Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice20;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice20);
                    printf("\n");
                    
        switch(choice20)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice21;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice21);
                    printf("\n");
        
		switch(choice21)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("----- The Notebook Movie Price Rs.350-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 350;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The Notebook Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice22;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice22);
                    printf("\n");
        
		switch(choice22)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The Notebook Movie Price Rs.250-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 250;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Notebook Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- The vow Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice23;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice23);
                    printf("\n");
                    
        switch(choice23)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice24;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice24);
                    printf("\n");
        
		switch(choice24)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The vow Price Rs.255-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 255;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The vow Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice25;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice25);
                    printf("\n");
        
		switch(choice25)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The vow Movie Price Rs.324-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 324;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The vow Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- The vow 2 Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice26;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice26);
                    printf("\n");
                    
        switch(choice26)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice27;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice27);
                    printf("\n");
        
		switch(choice27)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----  The vow 2 Movie Price Rs.145-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 145;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The vow 2 Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice28;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice28);
                    printf("\n");
        
		switch(choice28)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----  The vow 2 Movie Price Rs.145-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *145;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The vow 2 Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
  


     
    
    
    
    
    
    
    
    case'c':
            
               printf("------- wellcome To Horoor movie -------\n\n");
               
               printf("press a  For The Shining\n");
               printf("press b  For The Conjuring\n");
               printf("press c  For The Exorcist\n");
               printf("press d  For Alien\n");
        
    char choice29;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice29);
                    printf("\n");
		switch(choice29)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- The Shining Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice30;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice30);
                    printf("\n");
                    
        switch(choice30)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice31;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice31);
                    printf("\n");
        
		switch(choice31)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----The Shining Movie Price Rs.100-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 100;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Shining Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice32;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice32);
                    printf("\n");
        
		switch(choice32)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Shining Movie Price Rs.123-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 123;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Shining Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Conjuring Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice33;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice33);
                    printf("\n");
                    
        switch(choice33)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice34;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice34);
                    printf("\n");
        
		switch(choice34)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("-----The Conjuring Movie Price Rs.134-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 134;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Conjuring Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice35;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice35);
                    printf("\n");
        
		switch(choice35)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Conjuring Movie Price Rs.167-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 167;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Conjuring Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- The Exorcist Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice36;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice36);
                    printf("\n");
                    
        switch(choice36)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice37;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice37);
                    printf("\n");
        
		switch(choice37)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The Exorcist Movie Price Rs.178-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 178;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Exorcist Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice38;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice38);
                    printf("\n");
        
		switch(choice38)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The Exorcist Movie Price Rs.134-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 134;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Exorcist Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- Alien Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice39;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice39);
                    printf("\n");
                    
        switch(choice39)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice40;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice40);
                    printf("\n");
        
		switch(choice40)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Alien Movie Price Rs.108 -----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 108;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Alien Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice41;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice41);
                    printf("\n");
        
		switch(choice41)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Alien Movie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Alien Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
            
       
       
       
       
       
       
       
       
       
       
       case'd':
            
               printf("------- wellcome To Action movie -------\n\n");
               
               printf("press a  For Die Hard\n");
               printf("press b  For The Dark Knight\n");
               printf("press c  For Aliens\n");
               printf("press d  For The Matrix\n");
        
    char choice42;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice42);
                    printf("\n");
		switch(choice42)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- Die Hard Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice43;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice43);
                    printf("\n");
                    
        switch(choice43)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice44;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice44);
                    printf("\n");
        
		switch(choice44)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Die Hard Movie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Die Hard Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice45;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice45);
                    printf("\n");
        
		switch(choice45)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Die Hard Movie Price Rs.165-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 165;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Shining Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Dark Knight Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice46;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice46);
                    printf("\n");
                    
        switch(choice46)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice47;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice47);
                    printf("\n");
        
		switch(choice47)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("----- The Dark Knight Movie Price Rs.143-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 143;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Dark Knight Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice48;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice48);
                    printf("\n");
        
		switch(choice48)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Dark Knight Movie Price Rs.176-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 176;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Dark Knight Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- Aliens Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice49;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice49);
                    printf("\n");
                    
        switch(choice49)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice50;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice50);
                    printf("\n");
        
		switch(choice50)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Aliens Movie Price Rs.178-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 178;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Aliens Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice51;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice51);
                    printf("\n");
        
		switch(choice51)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Aliens Movie Price Rs.134-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 134;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Exorcist Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- The Matrix Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice52;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice52);
                    printf("\n");
                    
        switch(choice52)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice53;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice53);
                    printf("\n");
        
		switch(choice53)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The Matrix Price Rs.108 -----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 108;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The Matrix Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice54;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice54);
                    printf("\n");
        
		switch(choice54)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The MatrixMovie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Matrix Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
                    
}
        break;
        
        
        
        
          case '4':
          	
          	printf("------ wellcome To Gujarati ------\n");
          	printf(" press a  For comady\n");
          	printf(" press b  For romentic\n");
          	printf(" press c  For Horoor\n");
          	printf(" press d  For Action\n");
          	
          	
    char choice59;
                 printf("\n");
                 printf("Enter your choice : ");
                 scanf(" %c" , &choice59);
          	     printf("\n");
    switch(choice59)
    
    {
	 
              case'a':
            
               printf("------- wellcome To Comady movie -------\n\n");
               
               printf("press a  For The Hangover\n");
               printf("press b  For superbad\n");
               printf("press c  For Dumb and Dumber\n");
               printf("press d  For White Chicks\n");
        
    char choice3;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice3);
                    printf("\n");
		switch(choice3)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- The Hangover Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice4;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice4);
                    printf("\n");
                    
        switch(choice4)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice5;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice5);
                    printf("\n");
        
		switch(choice5)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----The Hangover Movie Price Rs.145-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 145;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Hangover Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice6;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice6);
                    printf("\n");
        
		switch(choice6)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Hangover Movie Price Rs.145-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 145;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Hangover Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- superbad Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice7;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice7);
                    printf("\n");
                    
        switch(choice7)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice8;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice8);
                    printf("\n");
        
		switch(choice8)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("-----Superbad Movie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Superbad Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice9;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice9);
                    printf("\n");
        
		switch(choice9)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----Superbad Movie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Superbad Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- Dumb and Dumber Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice10;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice10);
                    printf("\n");
                    
        switch(choice10)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice11;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice11);
                    printf("\n");
        
		switch(choice11)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Dumb and DumberMovie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Dumb and Dumber Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice12;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice12);
                    printf("\n");
        
		switch(choice12)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Dumb and Dumber Movie Price Rs.128-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 128;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Dumb and Dumber Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- White Chicks Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice13;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice13);
                    printf("\n");
                    
        switch(choice13)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice14;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice14);
                    printf("\n");
        
		switch(choice14)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- White Chicks Movie Price Rs.100-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 100;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" White Chicks Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice15;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice15);
                    printf("\n");
        
		switch(choice15)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- White Chicks Movie Price Rs.100-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *100;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" White Chicks Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
            
            
            
            
            
            
            
            
            
            
            
      case'b':
            
               printf("------- wellcome To Romantic movie -------\n\n");
               
               printf("press a  For Titanic\n");
               printf("press b  For The Notebook\n");
               printf("press c  For The vow\n");
               printf("press d  For The vow 2\n");
        
    char choice16;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice16);
                    printf("\n");
		switch(choice16)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- Titanic Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice17;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice17);
                    printf("\n");
                    
        switch(choice17)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice18;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice18);
                    printf("\n");
        
		switch(choice18)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Titanic Movie Price Rs.450-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 450;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Titanic Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice19;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice19);
                    printf("\n");
        
		switch(choice19)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Titanic Movie Price Rs.450-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 450;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Titanic Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Notebook Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice20;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice20);
                    printf("\n");
                    
        switch(choice20)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice21;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice21);
                    printf("\n");
        
		switch(choice21)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("----- The Notebook Movie Price Rs.350-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 350;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The Notebook Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice22;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice22);
                    printf("\n");
        
		switch(choice22)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The Notebook Movie Price Rs.250-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 250;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Notebook Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- The vow Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice23;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice23);
                    printf("\n");
                    
        switch(choice23)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice24;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice24);
                    printf("\n");
        
		switch(choice24)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The vow Price Rs.255-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 255;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The vow Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice25;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice25);
                    printf("\n");
        
		switch(choice25)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The vow Movie Price Rs.324-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 324;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The vow Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- The vow 2 Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice26;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice26);
                    printf("\n");
                    
        switch(choice26)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice27;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice27);
                    printf("\n");
        
		switch(choice27)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----  The vow 2 Movie Price Rs.145-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 145;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The vow 2 Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice28;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice28);
                    printf("\n");
        
		switch(choice28)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----  The vow 2 Movie Price Rs.145-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *145;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The vow 2 Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }

     
    
    
    
    
    
    
    
    case'c':
            
               printf("------- wellcome To Horoor movie -------\n\n");
               
               printf("press a  For The Shining\n");
               printf("press b  For The Conjuring\n");
               printf("press c  For The Exorcist\n");
               printf("press d  For Alien\n");
        
    char choice29;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice29);
                    printf("\n");
		switch(choice29)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- The Shining Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice30;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice30);
                    printf("\n");
                    
        switch(choice30)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice31;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice31);
                    printf("\n");
        
		switch(choice31)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("-----The Shining Movie Price Rs.100-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 100;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Shining Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice32;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice32);
                    printf("\n");
        
		switch(choice32)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Shining Movie Price Rs.123-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 123;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Shining Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Conjuring Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice33;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice33);
                    printf("\n");
                    
        switch(choice33)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice34;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice34);
                    printf("\n");
        
		switch(choice34)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("-----The Conjuring Movie Price Rs.134-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 134;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Conjuring Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice35;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice35);
                    printf("\n");
        
		switch(choice35)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Conjuring Movie Price Rs.167-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 167;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Conjuring Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- The Exorcist Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice36;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice36);
                    printf("\n");
                    
        switch(choice36)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice37;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice37);
                    printf("\n");
        
		switch(choice37)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The Exorcist Movie Price Rs.178-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 178;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Exorcist Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice38;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice38);
                    printf("\n");
        
		switch(choice38)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The Exorcist Movie Price Rs.134-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 134;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Exorcist Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- Alien Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice39;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice39);
                    printf("\n");
                    
        switch(choice39)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice40;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice40);
                    printf("\n");
        
		switch(choice40)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Alien Movie Price Rs.108 -----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 108;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" Alien Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice41;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice41);
                    printf("\n");
        
		switch(choice41)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Alien Movie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" Alien Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
            
       
       
       
       
       
       
       
       
       
       
       case'd':
            
               printf("------- wellcome To Action movie -------\n\n");
               
               printf("press a  For Die Hard\n");
               printf("press b  For The Dark Knight\n");
               printf("press c  For Aliens\n");
               printf("press d  For The Matrix\n");
        
    char choice42;
    				printf("\n");
                    printf("Enter your choice :");
                    scanf(" %c" , &choice42);
                    printf("\n");
		switch(choice42)
    
    
            {
			   
                   case 'a' :
                   	    
                   	    printf("------- Die Hard Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice43;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice43);
                    printf("\n");
                    
        switch(choice43)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice44;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice44);
                    printf("\n");
        
		switch(choice44)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Die Hard Movie Price Rs.109-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 109;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Die Hard Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 10:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice45;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice45);
                    printf("\n");
        
		switch(choice45)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 10:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Die Hard Movie Price Rs.165-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 165;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Shining Movie Ticket Booked\n\n");
									
                    break;
                 }
                 
                  break;
            
                    case 'b' :
                    	printf("------- The Dark Knight Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice46;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice46);
                    printf("\n");
                    
        switch(choice46)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 08:30 AM\n");
                		printf("press b  For : 11:45 AM\n");
                		 
        char choice47;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice47);
                    printf("\n");
        
		switch(choice47)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:45 AM\n");
			            break;
			    }
					printf("----- The Dark Knight Movie Price Rs.143-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 143;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("The Dark Knight Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 09:45 PM\n");
                		printf("press b  For : 10:30 PM\n");
                		 
        char choice48;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice48);
                    printf("\n");
        
		switch(choice48)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:30 PM\n");
			        	break;
						} 
						
						
            printf("-----The Dark Knight Movie Price Rs.176-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 176;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf("The Dark Knight Movie Ticket Booked\n\n");
					}
                   
                    break;
                    
                    
                    
                    
                    case 'c' :
                    
                    
                    	printf("------- Aliens Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice49;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice49);
                    printf("\n");
                    
        switch(choice49)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice50;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice50);
                    printf("\n");
        
		switch(choice50)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- Aliens Movie Price Rs.178-----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 178;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf("Aliens Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice51;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice51);
                    printf("\n");
        
		switch(choice51)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- Aliens Movie Price Rs.134-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op * 134;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Exorcist Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    	
                    	
        case 'd' :
                    
                    
                    	printf("------- The Matrix Movie Time -------\n\n");
                   	    printf("press a  For Moring Time \n");
                  		printf("press b  For Night Time \n");
                  		
    char choice52;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice52);
                    printf("\n");
                    
        switch(choice52)
		    
			
			{       
			        case'a' :
			        	printf("press a  For : 09:30 AM\n");
                		printf("press b  For : 10:45 AM\n");
                		 
        char choice53;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice53);
                    printf("\n");
        
		switch(choice53)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 09:30 AM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 10:45 AM\n");
			            break;
			    }
					printf("----- The Matrix Price Rs.108 -----\n\n");
                    	
                    		    char name[50];
        							int seat, total;
    								printf("Enter youer Name : ");			
    								scanf("%s" , name);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &seat);
                    
    								total = seat * 108;
    								printf("Youer  Name: %s", name);
									printf("\ntotale Amount: %d\n\n", total);
									printf(" The Matrix Movie Ticket Booked\n\n");
										
				
                		break;
                		
                		
                		
                	  case'b' :
			        	printf("press a  For : 08:45 PM\n");
                		printf("press b  For : 11:30 PM\n");
                		 
        char choice54;
    				printf("\n");
                    printf("Enter your Nmber :");
                    scanf(" %c" , &choice54);
                    printf("\n");
        
		switch(choice54)        		
                	
			{      
			        case'a' :
			        	printf("Your select time is 08:45 PM\n\n");
			        	break;
			        	
			        case'b':
			        	printf("Your select time is 11:30 PM\n");
			        	break;
						} 
						
						
            printf("----- The MatrixMovie Price Rs.109-----\n\n");
                    	
                    		    char car[50];
        							int op, totals;
    								printf("Enter youer Name : ");			
    								scanf("%s" , car);
                     	
  						 			 printf("Enter youer Seats : ");
    								scanf("%d" , &op);
                    
    								totals = op *109;
    								printf("Youer  Name: %s", car);
									printf("\ntotale Amount: %d\n\n", totals);
									printf(" The Matrix Movie Ticket Booked\n\n");
					}
                   
                    break;
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
 					break;
			   
 }
                    break;
                    
}
       
        
    }

 
 
 

}



  

