#include<stdio.h>

void Display(int iValue)
{
    for(int i=-iValue;i<=iValue;i++)
    {
        printf("%d\t",i);
    }
}

int main()
{
    int iNo=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}