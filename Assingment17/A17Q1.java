//Q1 = write a program to find the sum of digits of a number.

class Logic
{
    void sumOfDigits(int num)
    {
        int isum = 0, iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            isum = isum + iDigit;
            num = num / 10; 
        }

        System.out.println("Sum of Digits is:  "+isum);      
      
    }
}

class A17Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }

}