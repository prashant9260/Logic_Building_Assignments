     //Q5 = write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

     #include<stdio.h>

     int CountDiff(int iNo)
     {
          int iDigit = 0, EvenCount = 0, OddCount = 0, Difference = 0;

          if(iNo < 0)
          {
               iNo = -iNo;
          }
          
          while(iNo != 0)
          {
               iDigit = iNo % 10;

               if((iDigit % 2) == 0)
               {
                    EvenCount = EvenCount + iDigit;
               }
               else
               {
                    OddCount = OddCount + iDigit;
               }

               iNo = iNo / 10;
          }

          Difference = OddCount - EvenCount;

          return Difference;
     }

     int main()
     {
          int iValue = 0;
          int iRet = 0;

          printf("Enter number: ");
          scanf("%d",&iValue);

          iRet = CountDiff(iValue);

          printf("%d",iRet); 
     
          return 0;
     }

     //Time complexity = o(n)
