// Q- write a program which accept total marks and obtained marks form user and calculate percentage.

// Input = 1000     745
// Output = 74.5%

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
     float iPercentage = 0.0f;

     if(iNo1 == 0)
     {
          printf("Please enter the Valid number \n");
          return 0.0f;
     }

     iPercentage =  (((float)iNo2 * 100) / iNo1); 

     return iPercentage;
}

int main()
{
     int iValue1 = 0, iValue2 = 0;
     float fRet = 0.0f;
    
     printf("Please enter total marks: ");
     scanf("%d",&iValue1);

     printf("Please enter obtained marks: ");
     scanf("%d",&iValue2);

     fRet = Percentage(iValue1,iValue2);

     printf("Your percentage is: %.2f%%",fRet);

     return 0;
}