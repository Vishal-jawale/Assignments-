#include<iostream>
using namespace std;

void Reverse(char str[])
{
    char *start=str;
    char *end=str;

    char temp;

    while(*end!='\0')
    {
        end++;
    }
    end--;

    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
    printf("%s",str);
}

int main()
{
    char Arr[20];

    printf("Enter the String \n");
    scanf("%[^\n]s",Arr);

    Reverse(Arr);

    return 0;
}