import java.util.*;

class Assignment32_2
{
    public static int  CountSmall(String str)
    {
        int i=0;
        int iCnt=0;
        
        char Arr[]=str.toCharArray();
        for(i=0;i<str.length();i++)
        {
           if((Arr[i]>='a')&&(Arr[i]<='z'))
           {
                iCnt++;
           }
        }
        return iCnt;
    }

    public static void main(String arg[])
    {
        String str=null;
        int iRet=0;

        System.out.println("Enter String");
        Scanner sobj=new Scanner(System.in);
        str=sobj.nextLine();
        iRet=CountSmall(str);
        
        System.out.println(iRet);
    }
}
