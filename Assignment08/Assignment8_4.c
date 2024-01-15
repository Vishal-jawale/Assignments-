#include<stdio.h>

int OddFactorial(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    int iAns=1;

    for(int i=1;i<=iValue;i++)
    {
        if(i%2!=0)
        {
            iAns=iAns*i;
        }
    }
    return iAns;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    iRet=OddFactorial(iNo);
    printf("ODD Factorial Of Number is: %d",iRet);

    return 0;
}