#include<stdio.h>

void RangeDisplayEven(int iNo1, int iNo2)
{
    if(iNo2>iNo1 || ((iNo1||iNo2)<0))
    {
        printf("Invalid Range");
        return;
    }

    for(int i=iNo1;i<=iNo2;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue1=0;
    printf("Enter Starting Point: \n");
    scanf("%d",&iValue1);

    int iValue2=0;
    printf("Enter Ending Point: \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}
