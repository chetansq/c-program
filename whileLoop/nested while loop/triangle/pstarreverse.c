#include<stdio.h>
int main()
{
	
	int i=5;
	while(i>=1)
	{
		int k=5;
		while(k>i)
		{	
			printf(" ");
			
			k--;
		}
		
		int j=1;
		while(j<=i)
		{	
			printf("*");
			
			j++;
		}
		
		printf("\n");
		i--;
	}
	return 0;
}