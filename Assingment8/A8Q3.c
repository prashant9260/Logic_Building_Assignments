//Q - write a prgram to find factorial of given number 

//input = 5
//output -= 120     (5*4*3*2*1)

//input = -5
//output = 120      (5*4*3*2*1)

//input = 4
//output = 24       (4*3*2*1)

#include<stdio.h>

int factorial(int iNo)
{
     int iCnt = 0, iFact = 1;

     if(iNo < 0)
     {
          iNo = -iNo;
     }
     
     for(iCnt = iNo; iCnt >= 1; iCnt--)
     {
          iFact = iCnt * iFact;  
     }

     return iFact;
}

int main()
{
     int iValue = 0, iRet = 0;

     printf("Enter number: ");
     scanf("%d",&iValue);

     iRet = factorial(iValue);

     printf("Factorial of number is %d",iRet);

     return 0;
}
//Time complexity = O(n)