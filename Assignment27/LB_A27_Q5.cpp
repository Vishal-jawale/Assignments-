#include<iostream>
using namespace std;

void StrCatX( char *src, char *dest)
{
    while(*src!='\0')
    {
        *src++;
    }

    while(*dest!='\0')
    {
        *src=*dest;

    }
    *dest='\0';
}

int main()
{

    char Arr[100];
    char Brr[100];

    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Second String\n");
    scanf("%[^'\n']s",Brr);

    StrCatX(Arr,Brr);

    printf(" String  after concatination :- %s",Arr);



    return 0;
}