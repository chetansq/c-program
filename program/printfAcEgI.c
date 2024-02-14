#include<stdio.h>
int main()
{
	char a;
	int b;
	
	for(a>='A'; a<='Z'; a++)
	{
		if(a>='A' && a<='Z')
		{
			b=a;
			if(!(b%2==0))
			{
				
				printf("%c\t%c",b,a);
				a = b+32;
				
			}
		}
		
	}
	return 0;
}