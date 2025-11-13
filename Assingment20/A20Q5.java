//Q5. write a program to find the smallest digit in a given number.

class Logic
{
    void findSmallestDigit(int num)
    {
        int iDigit = 0, iSmall = 0;

        iSmall = 9;
        while(num != 0)
        {
            iDigit = num % 10;

            if(iDigit < iSmall )
            {
                iSmall = iDigit;
            }

            num = num / 10;
        }

        System.out.println(iSmall + " is small number");
    }
}

class A20Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}