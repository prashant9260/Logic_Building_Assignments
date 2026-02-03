import java.io.*;
import java.util.Scanner;

class A56Q5
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Directory name : ");
        String dirName = sobj.nextLine();   

        File fobj = new File(dirName);     
        
        if(fobj.exists() && fobj.isDirectory())
        {
            File files[] = fobj.listFiles();

            for(File f : files)
            {
                System.out.println(f.getName());
            }
        }
        else
        {
            System.out.println("Invalid directory....");
        }
    }
}
