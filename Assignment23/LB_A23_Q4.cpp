#include<iostream>
using namespace std;

bool ChkSpecial(char ch)
{
    if((ch>='!')&&(ch<='*'))
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


    printf("Enter the character :\n");
    scanf("%c",&cVlaue);

    bRet=ChkSpecial(cVlaue);
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