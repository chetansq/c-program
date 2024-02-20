#include<stdio.h>
int main()
{
	char name[50]; 
	int i,j;//length;
	gets(name); 
	
	for( i=0; name[i]!='\0'; i++)
	{	
		
		printf("%c",name[i]);
		//length=i;
			
	}
	
	printf("\n");
	
	for(j=i; name[j]>='\0'; j--)
	{
		printf("%c",name[j]);
		
	}
	
	return 0;
}