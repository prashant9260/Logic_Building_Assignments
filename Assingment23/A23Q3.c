//Q3 - Accept N numbers from user and accept one another number as NO, return index of last occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0; 
    int iLast = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iLast = iCnt;
        }            
    }
    return iLast;   
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter the NO: \n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurrence of number is %d ",iRet);
    }


    free(p);
    
    return 0;
}