#include<stdio.h>
int main()
{
	
	int i='A';
	while(i<='E')
	{
		int j=i;
		while(j>='A')
		{	
			
			printf("%c\t",j);
			
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}