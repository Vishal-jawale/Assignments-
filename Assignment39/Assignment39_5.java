import java.util.*;

class Assignment39_5
{
    public static int ToggleBit(int iValue,int Pos)
    {
        int iMask1=0X0000000F;
        int iMask2=0X000000F0;
        iMask1=iMask1<<(Pos-1);
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