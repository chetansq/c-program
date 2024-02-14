#include<stdio.h>

void gst1(int rate,int qty,float dis,float gst)
{
	
	float amt,billamt,netbill;

	amt=rate*qty;
	
	float d;
	d= (amt*dis)/100;
	
	billamt= amt - d;
	
	float g;
	g =(billamt*gst)/100;
	
	netbill=billamt + g;
	
	printf("rate\t qty\t amt\t\t dis\t billamt\t gst\t\t netbill\n");
	printf("%d\t %d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f",rate,qty,amt,d,billamt,g,netbill);
}

int gst(int rate,int qty,float dis,float gst)
{
	
	float amt,billamt,netbill;
	
	amt=rate*qty;
	
	float d;
	d= (amt*dis)/100;
	
	billamt= amt - d;
	
	float g;
	g =(billamt*gst)/100;
	
	netbill=billamt + g;
	
	printf("rate\t qty\t amt\t\t dis\t billamt\t gst\t\t netbill\n");
	printf("%d\t %d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f",rate,qty,amt,d,billamt,g,netbill);
	
	return netbill;
	
}

int main()
{
	gst1(50,200,5,18);
	 
	printf("\n\n");
	
	float total;
	total=gst(50,200,5,18);
	printf("\n%.2f",total);
	
	
	return 0;
}