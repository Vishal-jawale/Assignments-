import  java.util.*;

class Assignment33_1
{

    public static int Difference(int Brr[],int iSize)
    {
        int iSumEven=0;
        int iSumODD=0;
        int iAns=0;

        for(int i=0;i<iSize;i++)
        {
            if(Brr[i]%2==0)
            {
                iSumEven=iSumEven+Brr[i];
            }
        }

        for(int i=0;i<iSize;i++)
        {
            if(Brr[i]%2!=0)
            {
                iSumODD=iSumODD+Brr[i];
            }
        }

        iAns=iSumEven-iSumODD;
        return iAns;
    }

    public static void main(String arg[])
    {
        int size=0;
        int iRet=0;

        System.out.println("Enter The Size of Numbers that you want to enter \n");
        Scanner sobj=new Scanner(System.in);
        size=sobj.nextInt();

        int Arr[]=new int[size];
        System.out.println("Enter The Numbers ");

        for(int i=0;i<size;i++)
        {
            Arr[i]=sobj.nextInt();
        }

        iRet=Difference(Arr,size);

        System.out.println("Difference is: "+iRet);
    }
}