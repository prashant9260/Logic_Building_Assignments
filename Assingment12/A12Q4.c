     //Q4 = sum of even factors (exclude the number itself)

     #include<stdio.h>

     int sum_of_even_factors(int iNo)
     {
          int iCnt = 0, iCount = 0;

          if(iNo < 0)
          {
               iNo = -iNo;
          }

          for(iCnt = 1; iCnt<= (iNo/2); iCnt++)
          {
               if((iNo % iCnt) == 0)
               {
                    if((iCnt % 2) == 0)
                    {
                         iCount = iCnt + iCount;
                    }
               }
          }
          return iCount;
     }

     int main()
     {
          int number;

          printf("Enter number: ");
          scanf("%d",&number);

          printf("%d\n",sum_of_even_factors(number));
          
          return 0;
     }
     //Time complexity = O(N/2)