import java.util.*;

class Assignment38_1
{
    public static int OffBit(int iNo)
    {
        int iMask=64;
        int Result=iNo^iMask;

        return Result;
    }

    public static void  main(String arg[])
    {
        int iValue=0,iRet=0;

        System.out.println("Enter NUmber");
        Scanner sobj=new Scanner(System.in);

        iValue=sobj.nextInt();

        iRet=OffBit(iValue);

        System.out.println("After 7th Bit Off , Modified Number is: "+iRet);
    }
}