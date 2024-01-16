#include<stdio.h>


int CountFour(int iNo)
{
    int iDigit=0;
    int iCountFour=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==4)
        {
            iCountFour++;
        }
        
        iNo=iNo/10;
    }
    return iCountFour;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet=CountFour(iValue);

    printf(" Count Of Four Are :%d",iRet);
    return 0;
}