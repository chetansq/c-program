#include<stdio.h>
int main()
{
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;
	
}

// int main()
// {
// 	char a[5]; //= "skill";

// 	gets(a);
// 	for (int i = 1; i <= 5; i++)
// 	{
// 		for (int j = 0; j < i; j++)
// 		{
// 			printf("%c\t", a[j]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }