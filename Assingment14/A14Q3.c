     //Q3 = write a program which accept number from user and count frequency of2 in it.

     #include<stdio.h>

     int CountTwo(int iNo)
     {
          int iDigit = 0, iCount = 0;

          if(iNo < 0)
          {
               iNo = -iNo;    //updator
          }

          while(iNo != 0)
          {
               iDigit = iNo % 10;

               if(iDigit == 2)
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

          iRet = CountTwo(iValue);

          printf("%d\n",iRet);
     
          return 0;
     }
          //Time complexity = o(n)

