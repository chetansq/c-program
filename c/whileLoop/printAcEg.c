#include<stdio.h>
int main()
{
	int i='A';
	
	while(i<='Y')
	{
		if(!(i%2==0))
		{
		printf("%c\t",i);  // A 
		
		}
		else{
			i+=33;
			printf("%c\t",i); // c
			i-=31;
		}
		
		i++;
	}
	return 0;
}