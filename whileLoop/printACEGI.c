#include<stdio.h>
int main()
{
	int i='A';
	
	while(i<='Z')
	{
		if(!(i%2==0))
		{
		printf("%c\t",i);
		}
		i++;
	}
	return 0;
}