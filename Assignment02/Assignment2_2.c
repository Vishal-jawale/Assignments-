#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    while(iCnt<iNo)
    {
        printf("* \t");
        iCnt++;
    }
}

int main()
{
    int iValue=0;

    printf("Enter The Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}