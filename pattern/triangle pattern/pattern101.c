#include<Stdio.h>
int main()
{
	int a=1;
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(a%2==0)
			{
			printf("0 ");
			}
			else{
				printf("1 ");
			}
			a++;
		}
		printf("\n");
	}
	return 0;
}