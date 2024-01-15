#include<stdio.h>

void Number(int iValue)
{
    
    if(iValue<50)
    {
        printf("small");
    }
    else if(iValue>50 && iValue<100)
    {
        printf("medium");
    }
    else if(iValue>100)
    {
        printf("Large");
    }
}

int main()
{
    int iNo=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    Number(iNo);

    return 0;
}