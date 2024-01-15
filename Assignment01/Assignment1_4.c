#include<stdio.h>
#include<stdbool.h>

bool  Check(int iNo)
{
    if(iNo%5==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo=0;
    bool bRet=false;
    
    printf("Enter Number : ");
    scanf("%d",&iNo);

    bRet=Check(iNo);

    if(bRet==true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}