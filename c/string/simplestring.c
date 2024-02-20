#include<stdio.h>
int main()
{						
	// char name[50]= {'h','e','l','l','o'};
	
	char name[]= "hello world";
	// scanf("%s",name); // space not allow, only one word print
	// gets(name); // space allow
	
	for(int i=0; name[i]!='\0'; i++)
	{
		printf("%c",name[i]);
	}
	return 0;
}