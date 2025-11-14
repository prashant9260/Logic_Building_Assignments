//Q3-  Accept N numbers from user and return the  difference between smallest and largest number.

#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;
    
    iMax = Arr[iCnt];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int Smallest(int Arr[], int iLength)
{
    int iCnt = 0, iSmall = 0;

    iSmall = Arr[iSmall];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]) < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;
}

int Difference(int Arr[], int iLength)
{
    int iMax = Maximum(Arr, iLength);
    int iMin = Smallest(Arr, iLength);

    return (iMax - iMin);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue =0;
    int *p = NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements: \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf(" Difference is %d",iRet);

    free(p);

    return 0;
}