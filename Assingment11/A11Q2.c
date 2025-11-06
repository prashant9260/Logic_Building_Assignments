//Q2 = write a program which accept range from user and display all even numbers in between that range.

//input: 23 35
//ouput: 24  26  28  30  32  34

//input:10  18
//ouput: 10 12  14  16  18

//input: 10   10
//ouput: 10

//input: 90   18
//ouput: Invalid range

#include<stdio.h>

void RangDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid range");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangDisplayEven(iValue1, iValue2);

    return 0;
}
//Time complexity = O(N)