#include<stdio.h>

void Pattern(int iNo)
{
    char ch='\0';
    for(int i=0;i<iNo;i++)
    {
        printf("%c\t",ch+i+65);
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