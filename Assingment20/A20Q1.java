//Q1. write a program to find the sum of all even numbers up to N.

class Logic
{
    void sumEvenNumbers(int n)
    {
        int iSum = 0, iCnt = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
           if((iCnt % 2) == 0)
           {
                iSum = iSum + iCnt;
           }
        }

        System.out.println("Sumation of all even number: "+ iSum);

    }
}

class A20Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}