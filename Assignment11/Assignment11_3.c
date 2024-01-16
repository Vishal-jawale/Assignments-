#include<stdio.h>


int CountTwo(int iNo)
{
    int iDigit=0;
    int iCountTwo=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==2)
        {
            iCountTwo++;
        }
        
        iNo=iNo/10;
    }
    return iCountTwo;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountTwo(iValue);

    printf(" Count Of Two Are :%d",iRet);
    return 0;
}