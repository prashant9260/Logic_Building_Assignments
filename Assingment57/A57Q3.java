//3 - write java program to accept directory name form user and create that directory.

import java.io.*;
import java.util.Scanner;

class A57Q3
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name: ");
        String dir = sobj.nextLine();

        File fobj = new File(dir);

        if(fobj.exists())
        {
            System.out.println("directory is already exists...");
        }
        else
        {
            fobj.mkdir();
            System.out.println("directory gets successfully created...");
        }
    }
}
