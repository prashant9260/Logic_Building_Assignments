     //Q4 = find sum of first N even numbers

     #include<stdio.h>

     int sum_natural_number(int limit)
     {
          int iCnt = 0, iSum = 0;

          if(limit < 0)
          {
               limit = -limit;
          }

          for(iCnt = 1; iCnt <= limit; iCnt++)
          {
             if((iCnt % 2) == 0)
             {
                iSum = iCnt + iSum;
             }
          }

          return iSum;
     }
  
     int main()
     {
          int limit = 0;

          printf("Enter number: ");

          scanf("%d",&limit);
          
          printf("%d\n",sum_natural_number(limit));
          
          return 0;
     }
     //Time complexity = O(n)