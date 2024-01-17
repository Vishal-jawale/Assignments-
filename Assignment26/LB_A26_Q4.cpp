#include<iostream>
using namespace std;

int FirstChar(char *str, char ch)
{
    int Count=0;
    while(*str!='\0')
    {
        Count++;
        if(*str==ch)
        {
            break;
        }

        str++;
    }
  
   
        
    return Count;
}

int main()
{
    char  Arr[20];
    char cVlaue='\0';
    int Ret=0;

    printf("Enter The String\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character which you find in the string\n");
    scanf("%s",&cVlaue);

    Ret=FirstChar(Arr,cVlaue);
    
    printf("%d",Ret);

    return 0;
}