#include<stdio.h>

int Factorial(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    int iAns=1;
    for(int i=1;i<=iValue;i++)
    {
        iAns=iAns*i;
    }
    return iAns;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    iRet=Factorial(iNo);
    printf("Factorial Of NUmber is: %d ",iRet);

    return 0;
}