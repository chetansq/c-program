#include<stdio.h>
int main()
{

	for(int i=5; i>=1; i--)
	{
		
		for(int k=5; k>=i; k--)
		{
			printf(" ");
		}
		
		for(int j=i; j<=2*i-1; j++)
		{
			
			printf("* ");
			
		}
		printf("\n\n");
		
		
	}
	return 0;
	
}