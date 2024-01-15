
// INPUT:       12    

// OUTPUT:      5   7   8   9   10  11     

#include<stdio.h>

int NonFact(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }

    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==1)
        {
            printf("%d\t",iCnt);
        }
    }
    
}

int main()
{
    int iValue=0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);


    return 0;
}