import java.util.*;
import java.lang.*;

class Assignment35_1
{
    public static Boolean ChkNumber(int Brr[], int iNo)
    {
        Boolean bAns=false;
        int Length=Brr.length;
        for(int i=0;i<Length;i++)
        {
            if(Brr[i]==iNo)
            {
               bAns=true; 
            }
        }
        return bAns;
    }

    public static void main(String arg[])
    {
        int iSize=0;
        int iValue=0;
        Boolean bRet=false;

        System.out.println("Enter Size Of Numbers That You Want to Enter");
        Scanner sobj=new Scanner(System.in);
        iSize=sobj.nextInt();
        int Arr[]=new int[iSize];

        System.out.println("Enter The Number that You Have to Check");
        iValue=sobj.nextInt();


        System.out.println("Enter The Numbers");

        for(int i=0;i<iSize;i++)
        {
            Arr[i]=sobj.nextInt();
        }

       bRet=ChkNumber(Arr,iValue);

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