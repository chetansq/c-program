#include<stdio.h>
#include<string.h>

struct student{
	int id;
	char name[50];
	int marks[3];	
};

struct student std;

int main()
{
	int n;
	printf("enter student : ");
	scanf("%d",&n);
	
	for(int k=1;k<=n;k++)
	{
		printf("id : ");
		scanf("%d",&std.id);
		printf("name : ");
		scanf("%s",std.name);
		
		
		for(int j=0;j<3;j++)
		{
			printf("marks : ");
			scanf("%d",&std.marks[j]);		
		}
			printf("\n");
		
			printf("student id : %d\n",std.id);
			printf("student name : %s\n",std.name);
	
		for(int i=0;i<3;i++)
		{
			printf("student marks : %d\n",std.marks[i]);
		}
		
			float total;
			total=std.marks[0] + std.marks[1] + std.marks[2]; 
			printf("total : %.2f\n",total);
		
			float per=(total/300)*100;
		
			printf("per = %.2f\n",per);
			
			if(per <=100)
			{
				printf("Grade A+");
			}
			else if(per <=90  && per>=80)
			{
				printf("Grade A");
			}
			else if(per>=70 && per<80)
			{
				printf("Grade B");
			}
			else if(per>=60 && per<70)
			{
				printf("Grade C");
				
			}
			else if(per>=50 && per<60)
			{
				printf("Grade D");
				
			}
			else if(per>=35 && per<50)
			{
				printf("Grade E");
			}
			else
			{
				printf("SORRY,FAIL!");
			}
			printf("\n");
	}
	
	
		
	return 0;
}