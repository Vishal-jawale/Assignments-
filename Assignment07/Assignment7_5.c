#include<stdio.h>

void TableRev(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    
    for(int i=10;i>=1;i--)
    {
        printf("%d\t",i*iValue);
    }
    
}

int main()
{
    int iNo=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    TableRev(iNo);
    

    return 0;
}