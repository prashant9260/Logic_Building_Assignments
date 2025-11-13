//Q4. write a program to find the largest digit in a given number.

class Logic
{
    void findLargestDigit(int num)
    {
        int iDigit = 0, iMax = 0;

        while(num != 0)
        {
            iDigit = num % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            num = num / 10;
        }

        System.out.println(iMax + " is largest number");
    }
}

class A20Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}