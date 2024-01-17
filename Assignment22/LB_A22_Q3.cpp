#include<iostream>
using namespace std;

bool  ChkDigit(char ch)
{
    if((ch>='0')&&(ch<='9'))
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

    bRet=ChkDigit(cVlaue);

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