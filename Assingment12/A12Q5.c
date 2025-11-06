     //Q5 = CHECK IF NUMBER IS DIVISIBLE BY 5

     #include<stdio.h>
     #include<stdbool.h>

     bool is_divisible_by_five(int iNo)
     {
          if((iNo % 5) == 0)
          {
               return true;
          }
          else
          {
               return false;
          }
     }

     int main()
     {
          int number = 0;

          printf("Enter number: ");

          scanf("%d",&number);
          printf("%s\n",is_divisible_by_five(number) ? "Yes" : "No");
          
          return 0;
     }
      //Time complexity = O(N/2)

     //Ternary Operator" use kela ahe 