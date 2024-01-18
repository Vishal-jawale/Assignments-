import java.util.*;

class Assignment39_1
{
    public static boolean ChkBit(int iValue,int Pos)
    {
        int iMask=0X00000001;
        iMask=iMask<<(Pos-1);
        int iResult=iValue&iMask;

        if(iResult==iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String  arr[])
    {
        int iNo=0;
        int Pos=0;
        boolean bRet=false;

        System.out.println("Enter Number");
        Scanner sobj=new  Scanner(System.in);
        iNo=sobj.nextInt();

        System.out.println("Enter Position");
        Pos=sobj.nextInt();

        bRet=ChkBit(iNo,Pos);

        if(bRet==true)
        {
            System.out.println("Bit is On Position At: "+Pos);
        }
        else
        {
            System.out.println("Bit is OFF Position At: "+Pos);
        }
    }
}