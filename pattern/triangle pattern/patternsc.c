#include<stdio.h>
int main()
{
	int a='A';
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(i%2==0)
			{
			printf("%c\t",a+32);
			}else{
				printf("%c\t",a);
			
			}
			a++;
		}
		printf("\n");
		
	}
	return 0;
	
}