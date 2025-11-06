//Q3 = write a program to find thd maximum of two number

class Logic
{
    void findMax(int a,int b)
    {
        if(a > b)
        {
            System.out.println(a+" is maximum number ");  
        }
        else
        {
            System.out.println(b+" is maximum number ");   
        }
       
    }
}

class A17Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMax(20,15);
    }

}