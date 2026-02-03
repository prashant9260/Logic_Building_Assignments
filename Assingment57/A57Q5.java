//5 - write java program to accept dirctory name form user and display all names of files from that directory and size of each file on screen

import java.io.*;
import java.util.Scanner;

class A57Q5
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        int data = 0;

        System.out.println("Enter directory name: ");
        String dir = sobj.nextLine();

        File fobj = new File(dir);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();    //for get all file

            for(File f : files)
            {
                if(f.isFile())
                {
                    System.out.println("File name : "+f.getName() + "| Size : "+f.length()+" bytes");
                }
            }
        }
        else
        {
            System.out.println("Inavalid directory...");
        }
    }
}
