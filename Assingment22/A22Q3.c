//Q3- Accept N numbers from user and check whether that numbers contains 11 in it or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == 11)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p =NULL;
    bool bRet = false;

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

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(p);

    return 0;
}