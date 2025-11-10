class Logic
{
    void printDigit(int num)
    {
        int iDigit = 0;

        while(num != 0)
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
