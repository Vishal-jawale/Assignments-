
// INPUT:       A     b

// OUTPUT:      a     B

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue>=97 && cValue<=122)
    {
        printf("%c",cValue-32);
    }
    else if(cValue>=65 && cValue<=92)
    {
        printf("%c",cValue+32);
    } 
}

int main()
{
    char cValue='\0';
    printf("Enter Charcter\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}