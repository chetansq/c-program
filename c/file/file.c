#include <stdio.h>

int main()
{
    FILE *ptr;
    char str[20]="helloworld";

    ptr = fopen("filetext.txt", "w");
    fprintf(ptr, "%s", str);

    ptr=fopen("filetext.txt","r");
    fscanf(ptr,"%s",str);
    printf("character added %s\n",str);

    return 0;
}