import java.util.*;

class Assignment34_3
{
    public static int CountRange(int iValue)
    {
        int iDigit=0;
        int iCnt=0;
        int iDigitCnt=0;

        while(iValue!=0)
        {
            iDigit=iValue%10;
            if((iDigit>3 )&&(iDigit<7))
            {
                iDigitCnt++;
            }
            iValue=iValue/10;
        }
        
        return iDigitCnt;
    }

    public static void main(String arg[])
    {
        int iNo=0;
        int iRet=0;

        System.out.println("Enter The Number");

        Scanner sobj=new Scanner(System.in);
        iNo=sobj.nextInt();

        iRet=CountRange(iNo);

        System.out.println(iRet);
    }
}