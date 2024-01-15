#include<stdio.h>

int DollarToINR(int iValue)
{
    int iAns=iValue*70;
    return iAns;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    iRet=DollarToINR(iNo);

    printf("Value in INR is %d",iRet);

    return 0;
}