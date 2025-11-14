//Q4-  Accept N numbers from user and display summation of digits of each digit
#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0, iDigit = 0, i = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       while(Arr[iCnt] != 0)
       {
            iDigit = Arr[iCnt] % 10;

            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;

            iLength--;
       }
       printf("%d",iSum);
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

    DigitSum(p, iSize);

    free(p);

    return 0;
}

//wrong code
