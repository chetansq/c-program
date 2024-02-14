#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name[50];
	int marks;
}std10;

// struct student std10;

int main()
{
	std10.id=1;
	strcpy(std10.name,"raj");
	std10.marks=425;
	
	printf("student id : %d\n",std10.id);
	printf("student name : %s\n",std10.name);
	printf("student marks : %d\n",std10.marks);
	
	return 0;
}