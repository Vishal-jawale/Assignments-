#include<stdio.h>

void Pattern(int iNo1,int iNo2)
{
    
    for(int i=1;i<=iNo1;i++)
    {
        for(int j=iNo2;j>=1;j--)
        {
           if(j%2==0)
           {
                printf("*\t");
           }
           else
           {
                printf("#\t");
           }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2=0;

    printf("Enter Number of Rows: \n");
    scanf("%d\n",&iValue1);

    printf("Enter Number of Columns: \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}