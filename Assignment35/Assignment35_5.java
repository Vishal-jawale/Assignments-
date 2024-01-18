import java.util.*;
import java.lang.*;

class Assignment35_5
{
    public static int Product(int Brr[])
    {
        int i=0;
        int Mult=1;
        int Length=Brr.length;

        System.out.println(); 
        for(i=0;i<Length;i++)
        {
            if(Brr[i]%2!=0)
            {
                Mult=Mult*Brr[i];
            }
        }     
        if(Mult<=1)
        {
            Mult=0;
        }  
        return Mult;
    }

    public static void main(String arg[])
    {
        int iSize=0;
       
        int iRet=0;

        System.out.println("Enter Size Of Numbers That You Want to Enter");
        Scanner sobj=new Scanner(System.in);
        iSize=sobj.nextInt();
        int Arr[]=new int[iSize];

        System.out.println("Enter The Numbers");

        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sobj.nextInt();
        }

        iRet=Product(Arr);
        System.out.println(iRet);
    }
}