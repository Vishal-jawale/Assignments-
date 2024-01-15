#include<stdio.h>

void Table(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    
    for(int i=1;i<=10;i++)
    {
        printf("%d\t",i*iValue);
    }
    
}

int main()
{
    int iNo=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    Table(iNo);
    

    return 0;
}