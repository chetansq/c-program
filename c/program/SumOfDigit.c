#include <stdio.h>
// int sum(int n)
// {
//     int s = 0;

//     while (n != 0)
//     {
//         s = s + n % 10; // s=0+521%10; 1 / s=1+52%10; 2,2+1=3; s=3+5%10;
//         n = n / 10; //521/10=52 , 52/10; 5
//     }

//     // printf("%d", s);
//     return s;
// }
// int main()
// {
//     int n ;
//     printf("enter number : ");
//     scanf("%d", &n);

//     printf("%d", sum(n));
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, sum = 0, m;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    printf("Sum is=%d", sum);
    return 0;
}