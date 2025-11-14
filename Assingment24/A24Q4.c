//Q4-  Accept N numbers from user and display all such numbers which contains 3 digits in it.
#include<stdio.h>
#include<stdlib.h>

void Digit(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > 99 && (Arr[iCnt] < 1000))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
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

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digit(p, iSize);

    free(p);

    return 0;
}