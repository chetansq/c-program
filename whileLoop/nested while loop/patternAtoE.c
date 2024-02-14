#include<stdio.h>
int main()
{
	int i='A';
	while(i<='E')
	{
		int j='A';
		while(j<='E')
		{
			printf("%c\t",i);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}