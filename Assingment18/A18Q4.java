//Q4 = write a program to find sum of even and odd digits separately in number

class Logic
{
    void sumEvenOddDigits(int num)
    { 
        int iDigit = 0, eSum = 0, oSum = 0;

        while(num != 0)
        {
            iDigit = num % 10;

            if((iDigit % 2) == 0)
            {
                eSum = eSum + iDigit;
            }
            else
            {
                oSum = oSum + iDigit;
            }
            num = num / 10;
        }

        System.out.println("Sum of even number is "+ eSum);
        System.out.println("Sum of odd number is "+ oSum);
        
    }
}

class A18Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }

}