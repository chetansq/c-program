#include<stdio.h>
int main()
{
	char name[50]; 
	int i;
	gets(name); 
	
	for( i=0; name[i]!='\0'; i++)
	{	
		
		printf("%c",name[i]);


	}

	printf("\n length :%d",i);
	
	return 0;
}