#include<iostream>
using namespace std;

bool ChkChar(char *str, char ch)
{
    while(*str!='\0')
    {
        if(*str==ch)
        {
            break;
        }
        str++;
    }
        if(*str==ch)
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
    char  Arr[20];
    char cVlaue='\0';
    bool bRet=false;

    printf("Enter The String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you find in the string\n");
    scanf("%s",&cVlaue);

    bRet=ChkChar(Arr,cVlaue);
    if(bRet==true)
    {
        printf("Character Found\n");
    }
    else
    {
        
        ("Character not found\n");
    }

    return 0;
}