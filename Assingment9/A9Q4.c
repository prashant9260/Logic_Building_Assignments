//Q4 - Write a program to find odd factorial of given number. 

//input = 5 
//output = 15   (5 * 3 * 1)

//input = -5 
//output = 15   (5 * 3 * 1)

//input = 10
//output = 945     (9 * 7 * 5 * 3 * 1)

#include<stdio.h>

int OddFactorial(int iNo)
{
     int iCnt = 0, iFact = 1;

     if(iNo < 0)
     {
          iNo = -iNo;    //updator
     }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
          if((iCnt % 2) != 0)
          {
              iFact = iCnt * iFact; 
          }
     }
     return iFact;
}

int main()
{
     int iValue = 0 , iRet = 0;

     printf("Enter number: ");
     scanf("%d",&iValue);

     iRet = OddFactorial(iValue);

     printf("Odd Factorial of number is %d",iRet);

     return 0;
}
//Time complexity = O(n)



























