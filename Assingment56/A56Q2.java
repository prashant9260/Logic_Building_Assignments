//Q2 - write java program to accept file name form user name open that file and display the content on screen.

import java.io.*;
import java.util.Scanner;

class A56Q2
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name: ");
        String Fname = sobj.nextLine();

        FileInputStream fin = new FileInputStream(Fname);

        int ch = 0;

        while((ch = fin.read()) != -1)
        {
            System.out.print((char)ch);
        }

        fin.close();
    }
}