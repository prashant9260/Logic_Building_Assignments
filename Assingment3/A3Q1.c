//Q1. Write a program which accept one number from user and print that number of even number on screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCount = 0, i = 0;

    if(iNo <= 0)        
    {
        return;
    }

    i = 1;
    iCount = 1;

    while(iCount <= iNo)// 1 <= 7
    {
        if((i % 2) == 0)    // 2 % 2 == 0
        {
            printf("%d\n",i);
            iCount++;
        }
        i++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}