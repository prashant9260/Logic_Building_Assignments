//Q5. Accept one no form user and checkwhether is even or odd.

#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
     bool bResult = false;

     if((iNo % 2) == 0)
     {
          return true;
     }
     else
     {
          return false;
     }

     return bResult;
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
          printf(" %d is even number \n",iValue);
    }
    else
    {
          printf("%d is odd number \n",iValue);
    }

    return 0;
}