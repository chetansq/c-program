#include<stdio.h>
int main()
{
	for(int i='A'; i<='E'; i++)
	{
		for(int j=i; j>='A'; j--)
		{
			printf("%c\t",j);
		}
		printf("\n");
	}
	return 0;
}