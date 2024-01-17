#include<iostream>
using namespace std;

void StrCpyX( char *src, char *dest)
{
    while(*src!='\0')
    {
        *dest=*src;

        src++;
        dest++;
    }
    *dest='\0';
}

int main()
{

    char Arr[100];
    char Brr[100];

    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr,Brr);

    printf("String after copy:- %s",Brr);



    return 0;
}