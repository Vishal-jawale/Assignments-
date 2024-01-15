#include<stdio.h>

int FactorialDiff(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    int iEvenFact=1;
    int iOddFact=1;
    int iDifference=0;

    for(int i=1;i<=iValue;i++)
    {

          if(i%2==0)
        {
            iEvenFact=iEvenFact*i;
        }

        if(i%2!=0)
        {
            iOddFact=iOddFact*i;
        }
    }
    iDifference=iEvenFact-iOddFact;
    return iDifference;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    iRet=FactorialDiff(iNo);
    printf(" Factorial Difference is: %d",iRet);

    return 0;
}