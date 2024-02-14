#include<stdio.h>
int main()
{
	
	int i=5,n='A';
	while(i>=1)
	{
		int j=5;
		while(j>=i)
		{	
			
				printf("%c\t",n);
			
			n++;
			j--;
		}
		printf("\n");
		i--;
	}
	return 0;
}