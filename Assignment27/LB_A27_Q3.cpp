#include<iostream>
using namespace std;

void StrCpyCap( char *src, char *dest)
{
    while(*src!='\0')
    {
        if((*src>='A')&&(*src<='Z'))
        {
            *dest=*src;
            
            dest++;

        }
        src++;
    }
    *dest='\0';
}

int main()
{

    char Arr[30];
    char Brr[30];

    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    StrCpyCap(Arr,Brr);

    printf(" String  after copy character :- %s",Brr);



    return 0;
}