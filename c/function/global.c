#include<stdio.h>

int m1,m2,m3;

int input()
{
	printf("enter marks =");
	scanf("%d %d %d",&m1,&m2,&m3);
	
	float total=m1+m2+m3;
	return total;
}

float marks()
{	
	
	float total=input();
	float per=(total/300)*100;
	
	return per;
}

float per()
{
	float a=marks();
	return a;
}


int main()
{
	float s=per();
	printf("%.2f",s);
	return 0;
}