#include<stdio.h>
int main()
{
	char a;
	
	
	for(a>='A'; a<='Z'; a++)
	{
		if(a>='A' && a<='Z')
		{
		
			if(!(a%2==0))
			{
				
				printf("%c\t",a);
				
			}
			else
			{
				a+=33;
				printf("%c\t",a);
				a-=31;
			}
		}
		
	}
	return 0;
}