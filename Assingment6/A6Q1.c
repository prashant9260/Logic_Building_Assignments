// Q- write a program which accept name from user and print that name.

#include<stdio.h>

int main()
{
     char Name[30];

     printf("Please enter full name:");
     scanf("%s",&Name);

     printf("Your name is %s",Name);

     return 0;
}