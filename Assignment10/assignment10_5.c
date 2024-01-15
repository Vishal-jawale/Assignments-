#include<stdio.h>

int RangeDisplayRev(int iNo1, int iNo2)
{
    if(iNo2<iNo1 || ((iNo1||iNo2)<0))
    {
        printf("Invalid Range");
        // return;
    }
    int iAdd=0;

    for(int i=iNo2;i>=iNo1;i--)
    {
        printf("%d\t",i);
    }
    return iAdd;
}

int main()
{
    int iValue1=0;
    int iRet=0;

    printf("Enter Starting Point: \n");
    scanf("%d",&iValue1);

    int iValue2=0;
    printf("Enter Ending Point: \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
    
    return 0;
}
