import java.util.*;
import java.lang.*;

class Assignment35_4
{
    public static void Display(int Brr[], int start, int End)
    {
        int i=0;
        int Length=Brr.length;

        System.out.println(); 
        for(i=0;i<Length;i++)
        {
            if((Brr[i]>=start)&&(Brr[i]<=End))
            {
               System.out.println(Brr[i]); 
            }
        }

       
    }

    public static void main(String arg[])
    {
        int iSize=0;
        int start=0;
        int End=0;
        int iRet=0;

        System.out.println("Enter Size Of Numbers That You Want to Enter");
        Scanner sobj=new Scanner(System.in);
        iSize=sobj.nextInt();
        int Arr[]=new int[iSize];

        System.out.println("Enter The Starting Number");
        start=sobj.nextInt();

        System.out.println("Enter The Ending Number");
        End=sobj.nextInt();

        System.out.println("Enter The Numbers");

        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sobj.nextInt();
        }

        Display(Arr,start,End);
    }
}