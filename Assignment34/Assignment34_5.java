import java.util.*;

class Assignment34_5
{
    public static int Multiply(int iValue)
    {
        int iDigit=0;
        int iCnt=0;
        int iSumEven=0;
        int iSumODD=0;
        int iAns=0;

        while(iValue!=0)
        {
            iDigit=iValue%10;
            if(iDigit%2==0)
            {
                iSumEven=iSumEven+iDigit;
            }
            else
            {
                iSumODD=iSumODD+iDigit;
            }
            iValue=iValue/10;
        }
        iAns=iSumEven-iSumODD;

        return iAns;
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