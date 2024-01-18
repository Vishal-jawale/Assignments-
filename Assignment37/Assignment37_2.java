import java.util.*;

class Assignment37_2
{
    public static boolean ChkBit(int iNo)
    {
        int iMask=131088;
        int Result=iNo&iMask;

        if(Result==iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static voimain(String arg[])
    {
        int iValue=0;
        boolean bRet=false;

        System.out.println("Enter The Number");
        Scanner sobj=new Scanner(System.in);
        iValue=sobj.nextInt();

        bRet=ChkBit(iValue);

        if(bRet==true)
        {
            System.out.println("18th & 5th bit is ON");
        }
        else
        {
            System.out.println("18th & 5th bit is OFF");
        }
    }
}