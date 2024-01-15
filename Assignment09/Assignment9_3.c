#include<stdio.h>

int KMtoMeter(int iDistance)
{   
    int iAns=0;
    iAns=iDistance*1000;
    return iAns;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Distance: \n");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in Meter is: %d",iRet);

    return 0;
}