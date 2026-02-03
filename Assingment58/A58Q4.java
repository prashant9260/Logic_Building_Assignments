// Q3 - write java program to accept directory name from user and
// write data of all files with its name into one newly created file named "Marvellous.txt"

import java.io.*;
import java.util.Scanner;

class A58Q3
{
    public static void main(String args[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name: ");
        String dir = sobj.nextLine();

        File fobj = new File(dir);

        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            FileOutputStream fout =
                new FileOutputStream(dir + File.separator + "Marvellous.txt");

            for(File f : files)
            {
                if(f.isFile())
                {
                    // write file name
                    String header = "\nFile Name: " + f.getName() + "\n";
                    fout.write(header.getBytes());

                    FileInputStream fin = new FileInputStream(f);
                    int data = 0;

                    while((data = fin.read()) != -1)
                    {
                        fout.write(data);
                    }
                    fin.close();

                    fout.write("\n\n".getBytes());
                }
            }

            fout.close();
            System.out.println("All files data with names written into Marvellous.txt");
        }
        else
        {
            System.out.println("Invalid directory...");
        }
    }
}
