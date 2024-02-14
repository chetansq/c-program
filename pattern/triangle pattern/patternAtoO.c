#include<stdio.h>
int main()
{
	int a='A';
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%c\t",a);
			a++;
		}
		printf("\n");
		
	}
	return 0;
	
}