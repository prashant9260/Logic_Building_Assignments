//Q1 - Check Even or Odd

#include<stdio.h>

void CheckEvenOdd(int num)
{
    if((num % 2) == 0)
    {
        printf("%d is even number",num);
    }
    else 
   {
        printf("%d is Odd number",num);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);
    
    CheckEvenOdd(iValue);

    return 0;
}