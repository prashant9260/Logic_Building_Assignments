//Q4 = write a program to find thd minimum of three number

class Logic
{
    void findMin(int a,int b, int c)
    {
        if((a < b) && (a < c))
        {
            System.out.println(a+" is minimum number ");  
        }
        else if((b < a) && (b < c))
        {
            System.out.println(b+" is minimum number ");   
        }
        else
        {
            System.out.println(c+" is minimum number ");
        }
       
    }
}

class A17Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMin(3, 7, 2);
    }

}