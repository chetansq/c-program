#include<Stdio.h>
int main()
{
	int a=1;
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			printf("%d\t",a);
			a++;
			
		}
		printf("\n");
	}

	return 0;
}