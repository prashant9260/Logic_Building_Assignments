//1 - write java program to accept directory name form user and display all names of files from that directory which are regular file.

import java.io.*;
import java.util.Scanner;

class A58Q1
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name: ");
        String dir = sobj.nextLine();

        File fobj = new File(dir);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            for(File f : files)
            {
                if(f.isFile())      //only regular files
                {
                    System.out.println(f.getName());
                }
            }
        }
        else
        {
            System.out.println("Invalid directory...");
        }
    }
}