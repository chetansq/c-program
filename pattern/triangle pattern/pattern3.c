#include<stdio.h>
int main()
{
// for(int i=1; i<7; i++)
	// {
		// for(int j=1; j<=7; j++)
		// {
			// if(i==1)
			// {
			// printf("* "); // top horizontal line 
			// }
			// else{
				// printf(" "); // horizontal space
			// }
		// }
		  // printf("\n");
		
		// for(int j=1; j>=1; j--)  // left vertical line
		// {	
			// printf("* ");	
		// }
		 
		 // for(int j=4; j<=8; j++)
		// {
			// if(!(i==6))
			// {
			// printf("  "); // bottom horizontal line 
			// }
			// else{
				// printf("* "); // horizontal space
			// }
		// } 
		 
		// for(int j=1; j>=1; j--) // right vertical line
		// {
			// printf("*");	
		// }
	// } 
	
	
	for(int i=1; i<=7; i++)
	{
		for(int j=1;j<=7; j++)
		{
			if(i==1 || i==7 || j==1 || j==7)
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
 }
	
	