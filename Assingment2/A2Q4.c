//Q5. Accept two no form user and display first number in secound number of times.

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
   int iCnt = 0;

   if(iFrequency < 0)       //updator
   {
        iFrequency = -iFrequency;
   }

   for(iCnt = 1; iCnt <= iFrequency; iCnt++)
   {
        printf("%d\t",iNo);
   }
}

int main()
{
    int iValue = 0, iCount = 0;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);
    
    printf("Enter frequency: \n");
    scanf("%d",&iCount);

    Display(iValue, iCount);
    
    return 0;
}