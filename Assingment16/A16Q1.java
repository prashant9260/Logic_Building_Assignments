//Q1 = write a program to calculate the sum of first N natural numbers.

class Logic
{
    void calculatesum(int n)
    {
        int iCnt = 0, isum = 0;

        for(iCnt = 1; iCnt <= n; iCnt++)
        {
            isum = isum + iCnt;
        }

        System.out.println(isum);
    }
}

class A16Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculatesum(10);
    }

}