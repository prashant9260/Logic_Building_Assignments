//Q3 = write a program to print all odd numbers up to N

class Logic
{
    void printOddNumber(int num)
    { 
        int iCnt = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)           
        {
            if((iCnt % 2) != 0)
            {
                System.out.println( iCnt);
            }
        }

    }
}

class A18Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printOddNumber(20);
    }

}