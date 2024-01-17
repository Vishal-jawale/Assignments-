#include<iostream>
using namespace std;

void strlwrx(char *str)
{
    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
        
    }
   
    
}

int main()
{

    char Arr[20];
    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    printf("%s",Arr);
    

    return 0;
}