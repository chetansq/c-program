#include <stdio.h>
int main()
{

	int n;

	printf("enter number : ");
	scanf("%d", &n);
	int i = 1;

	do
	{
		if (i % 2 == 0)
		{
			printf("%d\t", i * i);
		}
		else
		{

			printf("%d \t", i);
		}
		i++;

	} while (i <= n);

	return 0;
}