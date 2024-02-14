#include<stdio.h>

// without argument with return 
float student()
{
	int m1,m2,m3;
	printf("enter marks = ");
	scanf("%d %d %d",&m1,&m2,&m3);
	
	float total,per;
	
	total=m1+m2+m3;
	
	per=(total/300)*100;
	
	return per;
}

int main()
{
	

	float d = student();
	printf("%.2f",d);
	
	return 0;
}