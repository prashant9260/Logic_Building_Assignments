//Q3 - write java program to accept file name form user name open that file in write mode and write some data at the end of file .

import java.io.*;
import java.util.Scanner;

class A56Q3
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name that you want to open :");
        String Fname = sobj.nextLine();

        //open file in write mode (append = true)

        FileOutputStream fout = new FileOutputStream(Fname, true);

        String data = "\n This data is added at the end of file";

        fout.write(data.getBytes());

        fout.close();

        System.out.println("Data written succesfully at end of file");

    }
}