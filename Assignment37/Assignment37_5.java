import java.util.*;

class Assignment37_5
{
    public static boolean ChkBit(int iNo)
    {
        long iMask = Long.parseLong("1152921504606846976");
        long Result=iNo&iMask;

        if(Result==iMask)
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
        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter The Number");
        Scanner sobj=new Scanner(System.in);
        iValue=sobj.nextInt();

        bRet=ChkBit(iValue);

        if(bRet==true)
        {
            System.out.println("7th ,8th , 9th bit is ON");
        }
        else
        {
            System.out.println("7th ,8th , 9th bit is OFF");
        }
    }
}