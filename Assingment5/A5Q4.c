//check positive, negative or zero

#include<stdio.h>

void CheckNumberType(int num)
{
    if(num == 0)
    {
        printf("%d is zero",num);
    }
    else if(num > 0)
    {
        printf("%d is positive",num);
    }
    else
    {
        printf("%d is negative",num);
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}