#include<stdio.h>
struct node{
 int data;
 char ch;
 struct node*ptr;
};

int main()
{
    struct node a,b;
    a.data = 65;
    a.ch = 'A';
    a.ptr = null;

    //printf("data of a is : %d\n",a.data);
    //printf("char of a is : %d\c",a.ch);
   
    b.data = 97;
    b.ch = 'a';
    b.ptr = null;

    //printf("data of b is : %d\n",b.data);
     //printf("char of b is : %c\n",b.ch);

     a.ptr = &b;
     //printf("data of b is : %d\n",ptr->data);
     //printf("char of b is : %c\n",ptr->ch);
    
     b.ptr = &a;
     printf("data of a is : %d\n",b.ptr->data);
     printf("char of a is : %c\n",b.ptr->ch);
    

}