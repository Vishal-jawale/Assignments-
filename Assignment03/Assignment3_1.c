
// INPUT: 7

// OUTPUT: 2   4   6   8   10  12  14

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    for(int i=1;i<=iNo*2;i++)
    {
        if(i%2==0)
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

    PrintEven(iValue);
    return 0;
}