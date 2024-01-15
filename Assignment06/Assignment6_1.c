#include<stdio.h>

void Pattern(int iValue)
{
    for(int i=0;i<iValue;i++)
    {
        printf("$\t");
        printf("*\t");
    }
}

int main()
{
    int iNo=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    Pattern(iNo);

    return 0;
}