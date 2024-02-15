#include<stdio.h>
int main()
{

    for(int i=1; i<=10; i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\t",i);
    }

    printf("\n");

    for(int j=1; j<=10; j++)
    {
        if(j==6)
        {
            continue;
        }
        printf("%d\t",j);
    }

    return 0;
}