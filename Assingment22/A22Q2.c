//Q2- Accept N numbers from user and return  difference between frequency of even numbers and odd numbers .

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0, iOdd = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    return iEven - iOdd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p =NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    if(iSize < 0)
    {
        iSize = -iSize;
    }

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allcate memory");
        return -1;
    }

    printf("Enter element: ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {        
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("Result is: %d",iRet);

    free(p);

    return 0;
}