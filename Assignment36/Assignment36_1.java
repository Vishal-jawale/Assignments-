import java.util.*;
import java.lang.*;

class Assignment36_1
{
    public static void StrNCatX(String Src,String Dest ,int iCnt)
    {
        char Arr[]=Dest.toCharArray();
        char Brr[]=new char[iCnt];

        
        for(int i=0;i<iCnt;i++)
        {
            Brr[i]=Arr[i];
        }

        System.out.println(Src+new String(Brr));
    }

    public static void main(String arg[])
    {

        String Arr=null;
        String Brr=null;
        int No=0;

        System.out.println("Enter First String");
        Scanner sobj=new Scanner(System.in);
        Arr=sobj.nextLine();

        System.out.println("Enter Second String");
        Brr=sobj.nextLine();
        
        System.out.println("Enter Number Of Characters That you want to Concat");
        No=sobj.nextInt();

        StrNCatX(Arr,Brr,No);
       
    }
}