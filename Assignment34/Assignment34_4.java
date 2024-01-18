import java.util.*;

class Assignment34_4
{
    public static int Multiply(int iValue)
    {
        int iDigit=0;
        int iCnt=0;
        int Mult=1;

        while(iValue!=0)
        {
            iDigit=iValue%10;
            if(iDigit!=0)
            {
                Mult=Mult*iDigit;
            }
            iValue=iValue/10;
        }
        
        return Mult;
    }

    public static void main(String arg[])
    {
        int iNo=0;
        int iRet=0;

        System.out.println("Enter The Number");

        Scanner sobj=new Scanner(System.in);
        iNo=sobj.nextInt();

        iRet=Multiply(iNo);

        System.out.println(iRet);
    }
}