//Q1 - write java program to accept file name form user name open that file .

import java.io.*;
import java.util.Scanner;

class A56Q1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name that you want to open :");
        String Fname = sobj.nextLine();

        File fobj = new File(Fname);

        if(fobj.exists())
        {
            System.out.println("File gets succesfully opened...");
        }
        else
        {
            System.out.println("File not found...");
        }
    }
}