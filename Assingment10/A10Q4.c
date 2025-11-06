//Q4 - Write a program which accept temperature in fahrenheit and convert it into celsius
//(1 celsius = (Fahrenhelt - 32) * (5/9))

//input = 10 
//output = -12.2222 (10 - 32) * (5 / 9)

//input = 34
//output = 1.11111 (34-32) * (5 / 9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius;
    
    fCelsius = ((fTemp - 32) * (5/9));

    return fCelsius;
}

int main()
{
     float fValue = 0.0;
     double dRet = 0.0;

     printf("Enter tempreature in Fahrenheit");
     scanf("%d",&fValue);

     dRet = FhtoCs(fValue);

     printf("Tempreture in Celsius: %d",dRet);

     return 0;
}
//Time Complexity = O(1)

