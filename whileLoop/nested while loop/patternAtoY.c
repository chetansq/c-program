#include<stdio.h>
int main()
{
	
	int i=1,n='A';
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{	
			printf("%c\t",n);
			n++;
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
