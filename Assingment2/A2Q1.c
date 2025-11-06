//Q5. Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0 )
    {
        iNo = -iNo;         //updater
    }
    
    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
    }   

}

int main()
{
    int iValue = 0;
    
    printf("Enter the frequency that you want to print \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}