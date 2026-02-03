//4 - write java program to accept file name from user calculate checksum of that file and display on screen.

import java.io.*;
import java.util.Scanner;

class A57Q4 
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        int CheckSum = 0, data = 0;

        System.out.println("Enter file name: ");
        String Fname = sobj.nextLine();

        FileInputStream fin = new FileInputStream(Fname);

        while((data = fin.read()) != -1)
        {
            CheckSum += data;
        }

        fin.close();

        System.out.println("Checksum of file is : "+CheckSum);       

    }
}
