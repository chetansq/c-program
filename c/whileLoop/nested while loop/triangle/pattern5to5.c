#include<stdio.h>
int main()
{
	
	int i=5;
	while(i>=1)
	{
		int j=5;
		while(j>=i)
		{	
			printf("%d\t",j);
			
			j--;
		}
		printf("\n");
		i--;
	}
	return 0;
}