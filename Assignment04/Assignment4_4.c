
// INPUT:       12    10    

// OUTPUT:      50    37 

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSum=0;
    

    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iCnt=0;

    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d",iRet);


    return 0;
}