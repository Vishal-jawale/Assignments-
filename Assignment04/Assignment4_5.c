
// INPUT:       10    

// OUTPUT:      -29

#include<stdio.h>

int FactDiff(int iNo)
{
    int iFact=0;
    int iNonFact=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iNonFact=iNonFact+iCnt;
        }
        else if(iNo%iCnt==0)
        {
            iFact=iFact+iCnt;
        }
    }
    return iFact-iNonFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);


    return 0;
}