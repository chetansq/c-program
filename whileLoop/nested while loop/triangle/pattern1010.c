#include<stdio.h>
int main()
{
	
	int i=5,n=1;
	while(i>=1)
	{
		int j=5;
		while(j>=i)
		{	
			if(n%2==0)
			{
				printf("0\t");
			}else{
				printf("1\t");
			}
			n++;
			j--;
		}
		
		printf("\n");
		i--;
	}
	return 0;
}