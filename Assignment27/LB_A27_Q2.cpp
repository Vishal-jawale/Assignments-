#include<iostream>
using namespace std;

void StrNCpyX( char *src, char *dest, int iCnt)
{
    while((*src!='\0')&&(iCnt!='\0'))
    {
        *dest=*src;

        src++;
        dest++;
        iCnt--;
    }
    *dest='\0';
}

int main()
{

    char Arr[100];
    char Brr[100];

    printf("Enter the First String\n");
    scanf("%[^'\n']s",Arr);

    StrNCpyX(Arr,Brr,10);

    printf("String after copy:- %s",Brr);



    return 0;
}