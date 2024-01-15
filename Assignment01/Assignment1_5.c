#include<stdio.h>


void Display(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        printf("*");
    }
}

int main()
{
    int iNo=0;
    
    
    printf("Enter Number : ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}