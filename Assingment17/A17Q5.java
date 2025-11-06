//Q5 = write a program to print the multiplication table of a number
class Logic
{
    void printTable(int num)
    {
        int iCnt = 1, iMulti = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)       
        {
            iMulti = iCnt * num;
            System.out.println(iMulti);
        }
       
    }
}

class A17Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }

}