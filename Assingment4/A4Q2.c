//Q1 - Write a program which accept number from User and display its factors decreasing order.

//Input: 12
//Output: 6   4   3   2   1

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo/2); iCnt > 0; iCnt--)
    {
        if((iNo % iCnt) == 0)  
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);
    
    FactRev(iValue);

    return 0;
}