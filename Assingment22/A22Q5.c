//Q5 - Accept N numbers from user and accept one another number as NO, return frequency of NO from it

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLenght, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
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

    printf("Enter the NO number: ");
    scanf("%d",&iValue);

    printf("Enter element: ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {        
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);

    printf("Frequency of NO is: %d",iRet);

    free(p);

    return 0;
}