//Q1 - Write a program which accept number from User and return difference between summation of all its factors and non factors.

//Input: 12
//Output: -34 

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, i = 0, j = 0, iDifference = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            i = iCnt + i;
        }
        else
        {
            j = iCnt + j;
        }
    }

    iDifference = j - i;

    return iDifference;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);
    
    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}