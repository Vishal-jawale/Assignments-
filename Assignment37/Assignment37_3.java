import java.util.*;

class Assignment37_3
{
    public static boolean ChkBit(int iNo)
    {
        int iMask=134250560;
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
            System.out.println("7th , 15th , 21th, 28th bit is ON");
        }
        else
        {
            System.out.println("7th , 15th , 21th, 28th bit is OFF");
        }
    }
}