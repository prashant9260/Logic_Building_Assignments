//Q5 = write a program to count the number of digits in a given number

class Logic
{
    void countDigits(int num)
    {
        int iCount = 0;

        while(num != 0)
        {
           iCount++;
           num = num / 10;
        }

        System.out.println("Count of this digit is "+iCount);      
      
    }
}

class A16Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }

}