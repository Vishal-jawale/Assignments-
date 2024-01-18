import java.util.*;
import java.lang.*;

class Assignment36_3
{
    public static boolean StrCompX(String Arr,String Brr,int iCnt )
    {

        char Arr1[]=Arr.toCharArray();
        char Arr2[]=Brr.toCharArray();

        char Str1[]=new char[iCnt];
        char Str2[]=new char[iCnt];

       
        for(int i=0;i<iCnt;i++)
        {   
            Str1[i]=Arr1[i];
            Str2[i]=Arr2[i];
        }

        if(new String(Str1).equals(new String(Str2)))
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
        int No=0;
        String Arr=null;
        String Brr=null;

        boolean bRet=false;

        System.out.println("Enter First String");
        Scanner sobj=new Scanner(System.in);
        Arr=sobj.nextLine();

        System.out.println("Enter Second String");
        Brr=sobj.nextLine();

        System.out.println("Enter Number Of Characters That you want to Compare");
        No=sobj.nextInt();
        
        bRet=StrCompX(Arr,Brr,No);

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