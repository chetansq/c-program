#include<Stdio.h>
int main()
{
	char a='A';
	
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=5; j++)
		{
			printf("%c\t",a);
			a++;
		}
		printf("\n");
	}		
	return 0;
}