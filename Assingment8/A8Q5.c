//Q - write a prgram which accept number from user and display its table in reverse order.

//input = 2
//output = 20  18   16   14   12   10   8    6    4    2

//input = 5
//output = 50  45   40   35   30   25   20   15   10   5

//input = -5
//output = 50  45   40   35   30   25   20   15   10   5

#include<stdio.h>

void TableRev(int iNo)
{
     int iCnt = 0;

     if(iNo < 0)
     {
          iNo = -iNo;
     }

     for(iCnt = 10; iCnt >= 1; iCnt--)
     {
          printf("%d\n",iCnt*iNo);
     }
}

int main()
{
     int iValue = 0, iRet = 0;

     printf("Enter number: ");
     scanf("%d",&iValue);

     TableRev(iValue);

     return 0;
}
//Time complexity = O(1)