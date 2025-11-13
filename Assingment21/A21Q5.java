//Q5- write a program to print all numbers from 1 to N that are divisible by both 2 and 3.

class Logic
{
    void printDivisibleBy2and3(int num)
    {
        int i = 0;

        if(num < 0)
        {
            num = -num;
        }

        for(i = 1; i <= num; i++)
        {
            if((i % 2) == 0 && (i % 3) == 0)
            {
                System.out.println(i);
            }
        }
    }
}

class A21Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);

        obj = null;

        System.gc();
    }
}
