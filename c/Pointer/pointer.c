#include<stdio.h>

int main()
{
	int a=10;
	int* ptr =&a; // '&' use of address store of 'a' in 'ptr'
	
	
	printf("Address of ptr = %p\n",ptr);
	printf("value of a = %d\n",a);
	printf("value of ptr = %d\n",*ptr);
	printf("Address of a = %p\n",&a); 
	printf("Address of ptr = %p\n",&ptr);
	
	return 0;
}