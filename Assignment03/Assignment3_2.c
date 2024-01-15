
// INPUT: 24

// OUTPUT: 2   4   6   8   12

#include<stdio.h>

void DisplayFactor(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    for(int i=1;i<=iNo/2;i++)
    {
        if(iNo%i==0)
        {
            printf("%d\t",i);
        }
    }
    
}

int main()
{
    int iValue=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    return 0;
}