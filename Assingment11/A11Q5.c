//Q5 = write a program which accept range from user and display all numbers in between that range in reverse order.

//input: 23 35
//ouput: 35 34  33  32  31  30  29  28  27  26  25  

//input:10  18
//ouput: 18 17  16  15  14  13  12  11  10

//input: 10     10
//ouput: 10

//input: 90   18
//ouput: Invalid range

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
   int iCnt = 0;

   if(iEnd < iStart)
   {
        printf("Invalid range");
        return;
   }
   
   for(iCnt = iEnd; iCnt >= iStart; iCnt--)
   {
        printf("%d\t",iCnt);
   }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);
   
    return 0;
}
//Time complexity = O(N)