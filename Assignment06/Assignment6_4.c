#include<stdio.h>

void OddDisplay(int iValue)
{
    for(int i=1;i<=iValue;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }

    }
}

int main()
{
    int iNo=0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    OddDisplay(iNo);

    return 0;
}