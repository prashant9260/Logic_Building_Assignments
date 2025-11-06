//Q3. Check Leap year.

#include<stdio.h>

void CheackLeap(int year)
{
    if(((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0)
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not year",year);
    }
}

int main()
{
    int yr = 0;
    printf("Enter year: ");
    scanf("%d",&yr);

    CheackLeap(yr);

    return 0;
}