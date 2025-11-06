//Q2 - Write a program which accept width & height of reactange from user and  and calculate its area. 
// (Area = width * Height)

//input = 5.3  9.78 
//output = 51.834

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
     float Area = 0.0f;

     Area = fWidth * fHeight;

     return Area;
}

int main()
{
     float fValue1 = 0.0, fValue2 = 0.0;
     double dRet = 0.0;

     printf("Enter width: ");
     scanf("%f",&fValue1);

     printf("Enter height: ");
     scanf("%f",&fValue2);

     dRet = RectArea(fValue1, fValue2);

     printf("Area of Reactangle is %f",dRet);

     return 0;
}
//Time Complexity = O(1)

