//Q1 - write a prgram which accept number from user and display below pattern

//input = 5
//output = *   *    *    *    *    #    #    #    #    #

//input = 2
//output = *   *    #    #

#include<stdio.h>

void Display(int iNo)
{
     int iCnt = 0, i = 0;

     if(iNo < 0)
     {
          iNo = -iNo;
     }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
          printf("*\t");
     }

     for(i = 1; i <= iNo; i++)
     {
          printf("#\t");
     }
}

int main()
{
     int iValue = 0, iRet = 0;

     printf("Enter number: ");
     scanf("%d",&iValue);

     Display(iValue);

     return 0;
}
//Time complexity = O(n)