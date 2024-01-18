import java.util.*;
import java.io.*;

class Assignment32_5
{
    public static void Reverse(String str)
    {
        char Arr[]=str.toCharArray();

        for(int i=((str.length())-1);i>=0;i--)
        {
            System.out.print(Arr[i]);
        }

        //Reversed to Another String.

        // char Arr[]=str.toCharArray();

        // char Brr[]=str.toCharArray();

        // for(int i=((str.length())-1);i>=0;i--)
        // {
        //    Brr[i]=Arr[i];
        //     System.out.print(Brr[i]);
        // }
    
    
        // Using in reverse()

        // StringBuilder input1 = new StringBuilder();
 
        // // append a string into StringBuilder input1
        // input1.append(str);
 
        // // reverse StringBuilder input1
        // input1.reverse();
 
        // // print reversed String
        // System.out.println(input1);
    }

    public static void main(String arg[])
    {
        String str=null;

        System.out.println("Enter String");
        Scanner sobj=new Scanner(System.in);
        str=sobj.nextLine();
        Reverse(str);
        
    }
}
