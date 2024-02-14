#include<stdio.h>
int main()
{
	int i='A';
	int a;
	while(i<='Z')
	{
		a=i+32;
		printf("%c-> %c\t",i,a);
			
		i++;
	}
	return 0;
}