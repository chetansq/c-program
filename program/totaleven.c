#include<stdio.h>
int main()
{
	int n,total=0;
	
	printf("enter number :");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			total=total+i;
		}
	}
	printf("%d",total);
	return 0;
}