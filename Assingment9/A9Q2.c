//Q2 - Accept amount in US dollar and return its corresponding value in Indian currency consider 1$ as 70 rupees.

//input = 10$
//output = 700

//input = 3$
//output =270

//input = 1200$
//output = 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
     int iRupee = 1;

     iRupee = 70 * iNo;

     return iRupee;
}

int main()
{
     int iValue = 0 , iRet = 0;

     printf("Enter number of USD: ");
     scanf("%d",&iValue);

     iRet = DollarToINR(iValue);

     printf("Value in INR is %d",iRet);

     return 0;
}
//Time complexity = O(1)