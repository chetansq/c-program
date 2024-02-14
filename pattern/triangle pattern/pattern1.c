 #include<Stdio.h>
 int main()
 { 
	 // for(int i=5; i>=1; i--) // raw
	// {	
		// for(int j=1; j<=i; j++) //column
		// {
			// if( j==5)
			// {
			// printf("");													
			// }
			// else{
				// printf("* ");
			// }
				// // printf("1 ");
		// }
	
		// for(int k=5; k>i; k--) //space
		// {
			// if(k==5)
			// {
			// printf("  ");													
			// }
			// else{
				// printf("    ");
			// }
			// //printf("    ");
		// }
		
		// for(int j=1; j<=i; j++) //column
		// {	
			// printf("* ");
			// //pprintf("2 ");			
		// }
		// printf("\n");		
	// } 
	
 // for(int i=2; i<=5; i++) //raw
	// {
		// for(int j=1; j<=i; j++) //column
		// {
			// if( j==5)
			// {
			// printf("");													
			// }
			// else{
				// printf("* ");
			// }
			// //printf("3 ");	
		// }
		
		// for(int k=5; k>i; k--) //space
		// {
			// if( k==5)
			// {
			// printf("  ");													
			// }
			// else{
				// printf("    ");
			// }
			// //printf("    ");
		// }
		
		// for(int j=1; j<=i; j++) //column
		// {	
			// printf("* ");
			// //pprintf("4 ");			
		// }
		// printf("\n");	
	// } 
	
	
	
	
	
	 for(int i=5; i>=1; i--) // raw
	{	
		for(int j=1; j<=i; j++) //column
		{
			if( j==5)
			{
			printf("");													
			}
			else{
				printf("*");
			}
				// printf("1 ");
		}
	
		for(int k=5; k>i; k--) //space
		{
			if(k==5)
			{
			printf(" ");													
			}
			else{
				printf("  ");
			}
			// printf("    ");
		}
		
		for(int j=1; j<=i; j++) //column
		{	
			printf("*");
			// printf("2 ");			
		}
		printf("\n");		
	} 
	
 for(int i=2; i<=5; i++) //raw
	{
		for(int j=1; j<=i; j++) //column
		{
			if( j==5)
			{
			printf("");													
			}
			else{
				printf("*");
			}
			// printf("3 ");	
		}
		
		for(int k=5; k>i; k--) //space
		{
			if( k==5)
			{
			printf(" ");													
			}
			else{
				printf("  ");
			}
			// printf("    ");
		}
		
		for(int j=1; j<=i; j++) //column
		{	
			printf("*");
			// printf("4 ");			
		}
		printf("\n");	
	} 
	
	return 0;
 }