
// INPUT:       12      

// OUTPUT:      6   4   3   2   1    

#include<stdio.h>

int FactRev(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;

    for(iCnt=(iNo/2);iCnt>=1;iCnt--)
    {
        if(iCnt%2==0)
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

    FactRev(iValue);


    return 0;
}