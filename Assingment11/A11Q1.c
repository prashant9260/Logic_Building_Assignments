//Q1 = write a program which accept range from user and display all numbers in between that range.

//input: 23 35
//ouput: 23 24  25  26  27  28  29  30  31  32  33  34  35

//input:10  10
//ouput: 10

//input: -10    2
//ouput: -10    9   8   7   6   5   4   3   2

//input: 90   18
//ouput: Invalid range

#include<stdio.h>

void RangDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangDisplay(iValue1, iValue2);

    return 0;
}
//Time complexity = O(N)