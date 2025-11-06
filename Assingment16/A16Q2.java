//Q2 = write a program to check whether a given number is even or odd.

class Logic
{
    void CheckEvenOdd(int num)
    {
        if((num % 2) == 0)
        {
            System.out.println(num+" is even");
        }
        else
        {
            System.out.println(num+" is odd"); 
        }
    }
}

class A16Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.CheckEvenOdd(7);
    }

}