import java.util.*;

class Assignment34_1
{
    public static int CountEven(int iValue)
    {
        int iDigit=0;
        int iCnt=0;
        int iDigitCnt=0;

        while(iValue!=0)
        {
            iDigit=iValue%10;
            if(iDigit%2==0)
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

        iRet=CountEven(iNo);

        System.out.println(iRet);
    }
}