import java.util.*;

class Assignment32_3
{
    public static int  CountDiff(String str)
    {
        int i=0;
        int iCntSmall=0;
        int iCntCap=0;
        int iDiff=0;
        
        char Arr[]=str.toCharArray();
        for(i=0;i<str.length();i++)
        {
           if((Arr[i]>='a')&&(Arr[i]<='z'))
           {
                iCntSmall++;
           }
        }

        for(i=0;i<str.length();i++)
        {
           if((Arr[i]>='A')&&(Arr[i]<='Z'))
           {
                iCntCap++;
           }
        }
        iDiff=iCntSmall-iCntCap;

        if(iDiff<0) //UPDATER
        {
            iDiff=-iDiff;
        }
        return iDiff;
    }

    public static void main(String arg[])
    {
        String str=null;
        int iRet=0;

        System.out.println("Enter String");
        Scanner sobj=new Scanner(System.in);
        str=sobj.nextLine();
        iRet=CountDiff(str);
        
        System.out.println(iRet);
    }
}
