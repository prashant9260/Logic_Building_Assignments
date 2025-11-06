//Q4 = write a program which accept range from user and add return addition of all even numbers in between that range.(range should contains positive numbers only)

//input: 23 30
//ouput: 108

//input:10  18
//ouput: 70

//input: -10   2
//ouput: Invalid range

//input: 90   18
//ouput: Invalid range

#include<stdio.h>

int RangSum(int iStart, int iEnd)
{
    int iCnt = 0, iCount = 0;

    if((iStart < 0) || (iEnd < 0) || (iEnd < iStart))
    {
        printf("Invalid range");
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
       if((iCnt % 2) == 0)
       {
           iCount = iCnt + iCount;
       }
    }

    return iCount;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangSum(iValue1, iValue2);

    if(iRet != -1)
    {
        printf("Addition is %d",iRet);
    }
    
    return 0;
}
//Time complexity = O(N)