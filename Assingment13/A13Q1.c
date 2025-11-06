     //Q1 = Print all numbers from 1 to N

     #include<stdio.h>

     void print_number(int limit)
     {
          int iCnt = 0;

          for(iCnt = 1; iCnt <= limit; iCnt++)
          {
               printf("%d\t",iCnt);
          }
     }
  
     int main()
     {
          int limit = 0;

          printf("Enter number: ");

          scanf("%d",&limit);
          
          print_number(limit);
          
          return 0;
     }
     //Time complexity = O(n)