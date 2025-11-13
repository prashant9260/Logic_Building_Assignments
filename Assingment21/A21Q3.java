//Q3- write a program to display all factors of a given number.

class Logic
{
    void displayFactors(int num)
    {
        int i = 0;

        for(i = 1; i <= (num/2); i++)
        {
            if((num % i) == 0)
            {
                System.out.println(i);
            }
        }
    }
}

class A21Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayFactors(12);
    }
}
