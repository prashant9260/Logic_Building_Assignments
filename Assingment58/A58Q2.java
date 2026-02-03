// Q2 - write java program to accept directory name from user and
// write names of all files from that directory into one newly created file named "Marvellous.txt"

import java.io.*;
import java.util.Scanner;

class A58Q2
{
    public static void main(String args[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory name: ");
        String dir = sobj.nextLine();

        File fobj = new File(dir);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            FileOutputStream fout = new FileOutputStream("Marvellous.txt");

            for(File f : files)
            {
                if(f.isFile())
                {
                    String Fname = f.getName() + "\n";
                    fout.write(Fname.getBytes());
                }
            }

            fout.close();
            System.out.println("FIles names written into Marvellous.txt successfully");
        }
        else
        {
            System.out.println("Invalid Directory...");
        }
    }
}
