#include <stdio.h>
int main()
{
	// pattern C
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			if (i == 1 || i == 7 || j == 1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	printf("\n");

	// pattern H
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			if (i == 4 || j == 1 || j == 7)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");

	// pattern E
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			if (i == 1 || i == 4 || i == 7 || j == 1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");

	// pattern T
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			if (i == 1 || j == 4)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");

	// pattern A
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			if (i == 1 || i == 4 || j == 1 || j == 7)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");

	// pattern N
	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == 1 || j == i)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}

			
		}

		for(int j=i; j>=1; j--){
				printf(" ");
			
		}

		for (int j = 1; j <= i; j++)
		{
			if (j == 1)
			{
				printf("* ");
			}	
		}
		printf("\n");
	}
	return 0;
}