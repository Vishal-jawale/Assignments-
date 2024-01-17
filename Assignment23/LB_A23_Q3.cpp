#include<iostream>
using namespace std;

void Display(char ch)
{
    
    if((ch>='A')&&(ch<='Z'))
    {
        while(ch!='Z')
        {
            printf("%c",ch);
            ch++;
        }
        
        printf("%c",ch);
    }
    else if((ch>='a')&&(ch<='z'))
    {
        while(ch!='a')
        {
            printf("%c",ch);
            ch--;
        }
        
        printf("%c",ch);
    }
}

int main()
{

    char cVlaue='\0';

    printf("Enter the character :\n");
    scanf("%c",&cVlaue);

    Display(cVlaue);

    return 0;
}