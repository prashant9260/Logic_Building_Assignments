//Q2- write a program to count how many even and odd numbers are present between 1 and N.

class Logic
{
    void countEvenOddRange(int num)
    {
       int i = 0, iEven = 0, iOdd = 0;

       for(i = 1; i <= num; i++)
       {
            if((i % 2 ) == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }
       }

       System.out.println(iEven + " even numbers between 1 to "+ num);
       System.out.println(iOdd + " odd numbers between 1 to "+ num);
    }
}

class A21Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}
