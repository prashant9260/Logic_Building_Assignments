//Q1 - write a program to calculate the product of digits of a number.
class Logic
{
    void productOfDigit(int num)
    {
        int iDigit = 0, iMulti = 1;

        while(num != 0)
        {
            iDigit = num % 10;
            iMulti = iMulti * iDigit;
            num = num / 10;
        }
        System.out.println(iMulti);
    }
}

class A21Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.productOfDigit(234);
    }
}
