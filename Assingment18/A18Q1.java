//Q1 = write a program to check whether a number is prime or not
class Logic
{
    void checkPrime(int num)
    {
       int iCnt = 0;
       boolean bFlag = true;

       for(iCnt = 2; iCnt <= num/2; iCnt++)
       {
            if((num % iCnt) == 0)
            {
                bFlag = false;
                break;
            }
       }

        if(bFlag == true)
        {
            System.out.println(num + " is prime number");
        }
        else
        {
            System.out.println(num + " is not prime number"); 
        }    

    }
}

class A18Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }

}