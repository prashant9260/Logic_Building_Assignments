//Q1 - Write a program which accept radius of circle from user and calculate its area. 
// consider value of PI as 3.14(Area = PI * Radius * Radius). 

//input = 5.3 
//output = 88.2026

//input = 10.4 
//output = 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
     float PI = 3.14;
     float Area = 0.0f;

     Area = (PI * fRadius * fRadius);

     return Area;
}

int main()
{
     float fValue = 0.0f;
     double dRet = 0.0;

     printf("Enter radius: ");
     scanf("%f",&fValue);

     dRet = CircleArea(fValue);

     printf("Area of circle is %f",dRet);

     return 0;
}
//Time Complexity = O(1)
