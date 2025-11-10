//Q2 = write a program to display the grade of a student based on marks

class Logic
{
    void displayGrade(int marks)
    {
        if(marks >= 80)
        {
            System.out.println("Grade is A");
        }
        else if(( marks >= 50) && ( marks < 80))
        {
           System.out.println("Grade is B"); 
        }
        else if((marks >= 35) && (marks < 50))
        {
           System.out.println("Grade is C"); 
        }
        else
        {
           System.out.println("Fail");
        }
    }
}

class A19Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }

}