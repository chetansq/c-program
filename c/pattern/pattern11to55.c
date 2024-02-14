#include<stdio.h>
int main()
{
	int a=11;
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			
			printf("%d\t",a);
			a++;
		}
		printf("\n");
		a+=5;
	}
	return 0;
}