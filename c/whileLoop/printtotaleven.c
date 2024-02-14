#include<stdio.h>
int main()
{
	int i=1,a=0;
	while(i<=50)
	{
		if(i%2==0)
		{
			a=a+i;
		}
			
		i++;
	}
	printf("%d\t",a);
	return 0;
}