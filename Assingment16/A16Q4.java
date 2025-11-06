//Q4 = write a program to reverse a number
class Logic
{
    void reverseNumber(int num)
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

class A16Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }

}