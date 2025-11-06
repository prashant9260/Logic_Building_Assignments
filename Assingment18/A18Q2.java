//Q2 = write a program to print all even numbers up to N

class Logic
{
    void printEvenNumbers(int num)
    { 
        int iCnt = 0;

        for(iCnt = 2; iCnt <= num; iCnt++)           
        {
            if((iCnt % 2) == 0)
            {
                System.out.println( iCnt);
            }
        }

    }
}

class A18Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }

}