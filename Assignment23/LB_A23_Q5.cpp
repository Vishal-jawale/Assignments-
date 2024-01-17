#include<iostream>
using namespace std;

void Display(char ch)
{
    if((ch>='0')&&(ch<='128'))
    {
        printf("Decimal %d\t\n",ch);
        printf("Octal %o\t\n",ch);
        printf("HexaDecimal %x\t\n",ch);
        
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