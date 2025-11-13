//Q4- write a program to count total number of factors of a given number.

class Logic
{
    void countFactors(int num)
    {
        int i = 0, iCount = 0;

        if(num < 0)
        {
            num = -num;
        }

        for(i = 1; i <= (num/2); i++)
        {
            if((num % i) == 0)
            {
                iCount++;
            }
        }
        System.out.println("Count of total number of factors: "+iCount);
    }
}

class A21Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}
