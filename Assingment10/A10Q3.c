//Q3 - Write a program which accept distance in kilometer and convert it into meter.
// (1 Kilometer = 100 meter)

//input = 5 
//output = 5000

#include<stdio.h>

int KMtoMeter(int iNo)
{
     int Meter = 0;

     if(iNo < 0)         //updator
     {
          iNo = -iNo;
     }

     Meter = iNo * 1000;

     return Meter;
}

int main()
{
     int iValue = 0, iRet = 0;

     printf("Enter distace: ");
     scanf("%d",&iValue);

     iRet = KMtoMeter(iValue);

     printf("%d in meter",iRet);

     return 0;
}
//Time Complexity = O(1)

