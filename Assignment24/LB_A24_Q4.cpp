#include<iostream>
using namespace std;

bool ChkVowel(char *ch)
{
    while(*ch!='\0')
    {
        if((*ch=='A')||(*ch=='E')||(*ch=='I')||(*ch=='O')||(*ch=='U')||(*ch=='a')||(*ch=='e')||(*ch=='i')||(*ch=='o')||(*ch=='u'))
        {
            break;
        }
        ch++;
    }
    if((*ch=='A')||(*ch=='E')||(*ch=='I')||(*ch=='O')||(*ch=='U')||(*ch=='a')||(*ch=='e')||(*ch=='i')||(*ch=='o')||(*ch=='u'))
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
    char Arr[20];
    bool bRet=false;


    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    bRet=ChkVowel(Arr);
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