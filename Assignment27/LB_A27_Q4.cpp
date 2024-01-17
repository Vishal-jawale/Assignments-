#include<iostream>
using namespace std;

void StrCpySmall( char *src, char *dest)
{
    while(*src!='\0')
    {
        if((*src>='a')&&(*src<='z')||((*src==' ')))
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

    char Arr[100];
    char Brr[100];

    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    StrCpySmall(Arr,Brr);

    printf(" String  after copy small character :- %s",Brr);



    return 0;
}