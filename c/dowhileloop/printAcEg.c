#include<stdio.h>
int main()
{
	
	
	
	
	int i='A';
	
		do{	
			if(i%2!=0)
			{
			printf("%c\t",i);
			}
			else{
				i+=33;
				printf("%c\t",i);	
				i-=31;
			}
			i++;
			
		}while(i<'Z');
		
		
	
	return 0;
}