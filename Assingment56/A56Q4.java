//Q4 - write java program to accept file name form user name and from user and create new file of that name if it is not existing.

import java.io.*;
import java.util.Scanner;

class A56Q4
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String Fname = sobj.nextLine();

        File fobj = new File(Fname);

        if(fobj.exists())
        {
           System.out.println(Fname+"File is already exits"); 
        }
        else
        {
            fobj.createNewFile(Fname);
            System.out.println("File gets succesffully created....");
        }
    }
}