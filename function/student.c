#include<stdio.h>

// with argument with return
float student(int m1,int m2,int m3)
{
	float total,per;
	
	total=m1+m2+m3;
	
	per=(total/300)*100;
	
	return per;
}

int main()
{
	int a,b,c;
	printf("enter marks = ");
	scanf("%d %d %d",&a,&b,&c);

	float d = student(a,b,c);
	printf("%.2f",d);
	
	return 0;
}