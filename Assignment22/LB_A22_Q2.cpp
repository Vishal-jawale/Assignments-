#include<iostream>
using namespace std;

bool  ChkCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
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

    bRet=ChkCapital(cVlaue);

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