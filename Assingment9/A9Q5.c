//Q5 - Write a program difference between Even factorial and odd factorial o given number. 

//input = 5 
//output = -7   (8-15)

//input = -5 
//output = -7   (8 - 15)

//input = 10
//output = 2895     (3840 - 945)

#include<stdio.h>

int FactorialDiff(int iNo)
{
     int iCnt = 0, iFact = 1, nFact = 1, Differece = 0;

     if(iNo < 0)
     {
          iNo = -iNo;         //upadator
     }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
          if((iCnt % 2) == 0)
          {
               iFact = iCnt * iFact;
          }
          else
          {
               nFact = iCnt * nFact;
          }
     }

     Differece = iFact - nFact;

     return Differece;
}

int main()
{
     int iValue = 0 , iRet = 0;

     printf("Enter number: ");
     scanf("%d",&iValue);

     iRet = FactorialDiff(iValue);

     printf("Factorial difference is %d",iRet);

     return 0;
}
//Time complexity = O(n)