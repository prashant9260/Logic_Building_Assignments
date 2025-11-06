//Q5. Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;         //updater
    }
    
    while(iNo >= 0)
    {
        printf("*\t");
        iNo--;
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