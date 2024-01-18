import java.util.*;

class Assignment39_4
{
    public static int ToggleBit(int iValue,int Pos)
    {
        int iMask=0X00000001;
        iMask=iMask<<(Pos-1);
        int iResult=iValue&iMask;

        if(iResult==iMask)
        {
            return (iValue^iMask);
        }
        else
        {
            return (iValue|iMask);
        }
    }

    public static void main(String  arr[])
    {
        int iNo=0;
        int Pos=0;
        int iRet=0;

        System.out.println("Enter Number");
        Scanner sobj=new  Scanner(System.in);
        iNo=sobj.nextInt();

        System.out.println("Enter Position");
        Pos=sobj.nextInt();

        iRet=ToggleBit(iNo,Pos);

        System.out.println("Modified Number is: "+iRet);
    }
}