import  java.util.*;

class Assignment33_4
{

    public static void  Display(int Brr[],int iSize)
    {
        System.out.println("Numbers Which Divisible by 5 and 3 are: \n");
        for(int i=0;i<iSize;i++)
        {
            if((Brr[i]%5==0)&&(Brr[i]%3==0))
            {
                System.out.println(Brr[i]);
            }
        }
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

        Display(Arr,size);
    }
}