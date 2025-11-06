//Q1 - Write a program which accept number from User and summation of all non-factors

//Input: 12
//Output: 50  

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, i = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            i = iCnt + i;
        }
    }

    return i;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);
    
    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}