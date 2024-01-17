#include<iostream>
using namespace std;

bool  ChkSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cVlaue='\0';
    bool bRet=false;

    printf("Enter a Character\n");
    scanf("%c",&cVlaue);

    bRet=ChkSmall(cVlaue);

    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}