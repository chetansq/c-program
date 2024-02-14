#include<stdio.h>
int main()
{
	
	int i=1,n=11;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{	
			printf("%d\t",n);
			n++;
			j++;
		}
		printf("\n");
		n+=5;
		i++;
	}
	return 0;
}