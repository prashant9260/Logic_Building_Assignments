//Q1 = print all factors of a number

#include<stdio.h>

void print_factors(int iNo)
{
     int iCnt = 1;

     if(iNo < 0)
     {
          iNo = -iNo;         //updator
     }

     while(iCnt <= (iNo/2))
     {
          if((iNo % iCnt) == 0)
          {
               printf("%d\t",iCnt);
          }
          iCnt++;
     }
}

int main()
{
   int number;

   printf("Enter number: ");
   scanf("%d",&number);

   print_factors(number);
   
    return 0;
}
//Time complexity = O(N/2)