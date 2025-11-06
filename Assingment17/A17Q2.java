//Q2 = write a program to checkwhether number is poilindrom or not

class Logic
{
    void checkPalindrome(int num)
    {
        int irev = 0, iDigit = 0, itemp = 0;

        itemp = num;

        while(num != 0)
        {
            iDigit = num % 10;
            irev = irev * 10 + iDigit;
            num = num / 10; 
        }

        if(irev == itemp)     
        {
            System.out.println(itemp +" is Palindrome");
        }
        else
        {
           System.out.println(itemp +" is not Palindrome"); 
        }
      
    }
}

class A17Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }

}