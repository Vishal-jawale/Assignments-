#include<stdio.h>

void Pattern(int iNo)
{
    char ch='\0';
    for(int i=1;i<=iNo;i++)
    {
        printf("%d\t",i);
        printf("*\t");
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}