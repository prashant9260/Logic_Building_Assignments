     //Q2 = write a program which accept number from user and count odd digits.

     #include<stdio.h>

     int CountOdd(int iNo)
     {
          int iDigit = 0, iCount = 0;

          if(iNo < 0)
          {
               iNo = -iNo;
          }
          
          while(iNo != 0)
          {
               iDigit = iNo % 10;

               if((iDigit % 2) != 0)
               {
                    iCount++;
               }

               iNo = iNo / 10;
          }

          return iCount;
     }

     int main()
     {
          int iValue = 0;
          int iRet = 0;

          printf("Enter number: ");
          scanf("%d",&iValue);

          iRet = CountOdd(iValue);

          printf("%d",iRet);
     
          return 0;
     }

     //Time complexity = o(n)
