//Q1 = write a program to check whether a given year is leap year or not.

class Logic
{
    void checkLeapYear(int year)
    { 
       if((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) 
       {
            System.out.println(year + " is Leap year");
       }
    }
}

class A19Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }

}