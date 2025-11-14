//Q1 - Accept N numbers from user and return frequency of even numbers.
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p =NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

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

    iRet = CountEven(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}