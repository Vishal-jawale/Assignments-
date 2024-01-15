#include<stdio.h>

void Display(int iValue)
{
    if(iValue<0)
    {
        iValue=-iValue;
    }
    
    for(int i=0;i<iValue;i++)
    {
        printf("*\t");
    }
    for(int i=0;i<iValue;i++)
    {
        printf("#\t");
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