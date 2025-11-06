// Q- write a program which accept three numbers and print its multiplication

// Input = 5   4    7 
// Output = 140

// Input = 5   0    7
// Output = 35

// Input = 5   0    0
// Output = 5

// Input = 0   0    0
// Output = 0

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
     if((iNo1 == ) == 0 || (iNo2 == 0) || (iNo3 == 0))
     {
          0 = 1;
     }

 
}

int main()
{
     int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
     printf("Please enter three numbers: ");
     scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

     iRet = Multiply(iValue1,iValue2,iValue3);

     printf("Multiplication is: %d",iRet);

     return 0;
}