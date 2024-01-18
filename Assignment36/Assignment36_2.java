import java.util.*;
import java.lang.*;

class Assignment36_2
{
    public static boolean StrCompX(String Arr,String Brr )
    {
        if(Arr.equals(Brr))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String arg[])
    {

        String Arr=null;
        String Brr=null;

        boolean bRet=false;

        System.out.println("Enter First String");
        Scanner sobj=new Scanner(System.in);
        Arr=sobj.nextLine();

        System.out.println("Enter Second String");
        Brr=sobj.nextLine();
        
        bRet=StrCompX(Arr,Brr);

        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
       
    }
}