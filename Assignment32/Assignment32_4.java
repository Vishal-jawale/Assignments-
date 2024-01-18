import java.util.*;

class Assignment32_4
{
    public static boolean  ChkVowel(String str)
    {
        int i=0;
        boolean bRet=false;
        
        char Arr[]=str.toCharArray();
        for(i=0;i<str.length();i++)
        {
           if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u')||(Arr[i]=='A')||(Arr[i]=='E')||(Arr[i]=='I')||(Arr[i]=='O')||(Arr[i]=='U'))
            {
               bRet= true; 
            }
        }
        return bRet;
    }

    public static void main(String arg[])
    {
        String str=null;
        boolean bRet=false;

        System.out.println("Enter String");
        Scanner sobj=new Scanner(System.in);
        str=sobj.nextLine();
        bRet=ChkVowel(str);
        
        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}
