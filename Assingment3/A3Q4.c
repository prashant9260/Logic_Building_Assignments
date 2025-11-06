//Q4. Accept one charater from user and convert case of that charater.
//input a:     output: A
//input: D      output: d


#include<stdio.h>

void DisplayConvert(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n",ch+32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n",ch-32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the one charater: \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}