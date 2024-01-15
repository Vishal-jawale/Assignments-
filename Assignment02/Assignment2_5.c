#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    bool bFlag=false;

    if(iNo%2==0)
    {
        bFlag=true;
    }
    else
    {
       bFlag=false;
    }

    return bFlag;
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter The Number\n");
    scanf("%d",&iValue);

    bRet=Check(iValue);

    if(bRet==true)
    {
        printf("%d is EVEN",iValue);
    }
    else
    {
        printf("%d is ODD",iValue);
    }

    return 0;
}