//Q4 = write a program to print each digit of a number separately

class Logic
{
    void printDigit(int num)
    {
       int iCnt = 0, iDigit = 0;

       for(iCnt = 1; iCnt <= num; iCnt++)
       {
            iDigit = num % 10;

            System.out.println(iDigit);

            num = num / 10;
       }
    }
}

class A19Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDigit(9876);
    }

}