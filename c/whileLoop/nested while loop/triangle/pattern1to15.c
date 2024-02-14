#include<stdio.h>
int main()
{
	
	int i=5,n=1;
	while(i>=1)
	{
		int j=5;
		while(j>=i)
		{	
			printf("%d\t",n);
			n++;
			j--;
		}
		printf("\n");
		i--;
	}
	return 0;
}