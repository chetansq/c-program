#include<stdio.h>
int main()
{
	
	int student[5];
	int marks[3];
	float total, per;
	
	for(int i=0; i<5; i++)
	{
		printf("Enter The Student NO :\n");
		scanf("%d",&student[i]);
			
			for(int j=0; j<3; j++)
			{
				printf("enter marks :");
				scanf("%d",&marks[j]);

			}
			
			 total = marks[0] + marks[1] + marks[2];
				printf("total : %f\n",total);
				
				per= (total/300)*100;
				printf("per is : %f\n",per);
				
				
				if(per<=100 && per>=90)
				{
					printf("Grade A+");
				}
				else if(per<90 && per>=80)
				{
					printf("Grade A");
				}
				else if(per<80 && per>=70)
				{
					printf("Grade B");
				}
				else if(per<70 && per>=60)
				{
					printf("Grade C");
				}
				else if(per<60 && per>=50)
				{
					printf("Grade D");
				}
				else if(per<50 && per>=35)
				{
					printf("Grade E");
				}
				else{
					printf("Sorry, FaIL ");
				}
				
			printf("\n");
	}
	
	printf("\n");
	
	return 0;
}