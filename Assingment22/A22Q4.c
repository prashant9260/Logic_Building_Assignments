//Q4 - Accept N numbers from user and frequency of 11 from it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLenght)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if((Arr[iCnt]) == 11)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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

    printf("Frequency of 11 is: %d",iRet);

    free(p);

    return 0;
}