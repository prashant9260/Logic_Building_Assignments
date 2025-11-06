//Q3 = write a program to find the factorial of a number using a for loop.

class Logic
{
    void findFactorial(int num)
    {
       int iCnt = 0, iFactorial = 1;

       for(iCnt = 1; iCnt <= num; iCnt++)
       {
            iFactorial = iCnt * iFactorial;
       }

       System.out.println("Factorial is " + iFactorial);
    }
}

class A16Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }

}