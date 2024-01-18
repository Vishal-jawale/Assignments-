import java.util.*;
import java.lang.*;

class Assignment35_2
{
    public static int FirstOcc(int Brr[], int iNo)
    {
        int index=0;
        int Length=Brr.length;
        for(index=0;index<Length;index++)
        {
            if(Brr[index]==iNo)
            {
               break; 
            }
        }

        return index;
    }

    public static void main(String arg[])
    {
        int iSize=0;
        int iValue=0;
        int iRet=0;

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

        iRet=FirstOcc(Arr,iValue);

        System.out.println("\n");
        if(iRet<iSize)
        {
            System.out.println(iRet);
        } 
        else
        {
            System.out.println("-1");
        }
    }
}