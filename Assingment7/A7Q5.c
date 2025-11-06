//Q - Write a program which accept N number from user and print first 5 multiples of N

//input - 4
//output - 4   8    12   16   20
#include<stdio.h>

void MultipleDisplay(int iNo)
{
     int iCnt = 0, i = 0;

     for(iCnt = 1; iCnt <= 5; iCnt++)
     {
          i = iNo * iCnt;
          printf("%d\n",i);
     }
}

int main()
{
     int iValue = 0;

     printf("Enter number: ");
     scanf("%d",&iValue);

     MultipleDisplay(iValue);

     return 0;
}
//Time complexity = O(1)