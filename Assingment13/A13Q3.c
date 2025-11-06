     //Q3 = Print all odd numbers from up to N

     #include<stdio.h>

     void print_odd_number(int limit)
     {
          int iCnt = 0;

          if(limit < 0)
          {
               limit = -limit;
          }

          for(iCnt = 1; iCnt <= limit; iCnt++)
          {
               if((iCnt % 2) != 0)
               {
                    printf("%d\t",iCnt);
               }
          }
     }
  
     int main()
     {
          int limit = 0;

          printf("Enter number: ");

          scanf("%d",&limit);
          
          print_odd_number(limit);
          
          return 0;
     }
     //Time complexity = O(n)