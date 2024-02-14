#include <stdio.h>
int main()
{
    int var ;

    printf("enter no :");
    scanf("%d",&var);

    switch (var)
    {
    case 1:
        printf("case 1");
        break;

    case 2:
        printf("case 2");
        break;

    default :
        printf("not ");
        break;
    }
    return 0;
}