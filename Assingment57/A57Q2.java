//2 - write java program to accept file name from user and check whether that file is regular file or not.

import java.io.*;
import java.util.Scanner;

class A57Q2
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name: ");
        String Fname = sobj.nextLine();

        File fobj = new File(Fname);

        if(fobj.exists() && fobj.isFile())
        {
            System.out.println("It is regular file");
        }
        else
        {
            System.out.println("It is not regular file");
        }
    }
}
