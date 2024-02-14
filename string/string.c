#include<stdio.h>
int main()
{
	char name1[50],name2[50]; 
	int i,j;
	gets(name1);
	gets(name2);
	
	for( i=0; name1[i]!='\0'; i++)
	{	

		printf("%c",name1[i]);
	
	}
	
	for( j=0; name2[j]!='\0'; j++)
	{	
		
		printf("%c",name2[j]);

	}
	
	printf("\n%c",name1[i] + name2[j]);
	
	return 0;
}