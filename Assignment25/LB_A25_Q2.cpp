#include<iostream>
using namespace std;

void struprx(char *str)
{
    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            *str=*str-32;
        }
        str++;
        
    }
   
    
}

int main()
{

    char Arr[20];
    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    struprx(Arr);

    printf("%s",Arr);
    

    return 0;
}