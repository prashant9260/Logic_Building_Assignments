/*
    Q1 - write java program to accept two file names from user and open first file
    and create new file(secound name) and copy the data from first file into newly created file.

*/
import java.io.*;
import java.util.Scanner;

class A57Q1
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name : ");
        String src = sobj.nextLine();

        System.out.println("Enter destination file name : ");
        String dest = sobj.nextLine();

        FileInputStream fin = new FileInputStream(src);
        FileOutputStream fout = new FileOutputStream(dest);

        int data = 0;
        while((data = fin.read()) != -1)
        {
            fout.write(data);
        }

        fin.close();
        fout.close();

        System.out.println("File copied successfully");
    }
}
