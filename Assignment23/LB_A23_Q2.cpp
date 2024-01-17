#include<iostream>
using namespace std;

void Display(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
        ch=ch+32;
        printf("%c",ch);
    }
    else if((ch>='a')&&(ch<='z'))
    {
        ch=ch-32;
        printf("%c",ch);
    }
    else if((ch>='0')&&(ch<='9'))
    {
        ch=ch-48;
        printf("%d",ch);
    }
    else
    { 
        
        printf("%d",ch);
    }
}

int main()
{
    char cVlaue='\0';

    printf("Enter a Chaaracter'\n");
    scanf("%c",&cVlaue);

    Display(cVlaue);

    return 0;
}
