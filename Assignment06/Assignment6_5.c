#include<stdio.h>

void MultipleDisplay(int iValue)
{
    
    for(int i=1;i<=5;i++)
    {
        printf("%d\t",i*iValue);
    }
}

int main()
{
    int iNo=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    MultipleDisplay(iNo);

    return 0;
}