//Q5 - Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0; 
    int iMulti = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iMulti = iMulti * Arr[iCnt];
        }
    }

    return iMulti;   
    
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements: \n");
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

    iRet = Product(p, iSize);

    printf("Product is %d",iRet);

    free(p);

    return 0;
}