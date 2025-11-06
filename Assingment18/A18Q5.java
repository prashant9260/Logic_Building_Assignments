//Q5 = write a program to check whether a number is positive, negative, or zero.

class Logic
{
    void checkSign(int num)
    { 
        if(num == 0)
        {
            System.out.println(num + " is zero");
        }
        else if(num > 0)
        {
            System.out.println(num + " is positive");
        }
        else
        {
            System.out.println(num +" is negative");
        }
        
    }
}

class A18Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }

}