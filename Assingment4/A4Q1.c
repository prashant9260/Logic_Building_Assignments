//Q1 - Write a program which accept number from and display its multiplication of factor.

//Input: 12
//Output: 144  (1 * 2 * 3 * 4 * 6)

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int i = 1;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt ) == 0) // 6 % 2 == 0    true
        {
            i = iCnt * i; 
        }    
    }
    
    return i;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}