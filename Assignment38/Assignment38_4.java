import java.util.*;

class Assignment38_4
{
    public static int Toggle(int iNo)
    {
        int iMask=576;
        int Result=iNo^iMask;

        if(Result==iMask)
        {
            return iNo;
        }
        else
        {
            return(iNo^iMask);
        }
    }

    public static void  main(String arg[])
    {
        int iValue=0,iRet=0;

        System.out.println("Enter NUmber");
        Scanner sobj=new Scanner(System.in);

        iValue=sobj.nextInt();

        iRet=Toggle(iValue);

        System.out.println("Modified Number is: "+iRet);
    }
}