#include<stdio.h>

int main()
{
	int a;
	int b;
	
	printf("enter value a =");
	scanf("%d",&a);
	
	printf("enter value b =");
	scanf("%d",&b);
	
	int* ptr =&a;
	int* p=&b;
	int c;

	c = *p;
	*p = *ptr;

	printf("value of a = %d\n",c);
	printf("value of b = %d\n",*p);
	// printf("value of ptr = %d\n",*ptr);
	// printf("address of p = %p\n",&p);
	// printf("address of a = %p\n",&a);
	// printf("address of b = %p\n",&b);
	// printf("address of ptr = %p\n",&ptr);
	
	return 0;
}