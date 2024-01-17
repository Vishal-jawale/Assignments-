#include<iostream>
using namespace std;

void DisplayDigit(char *str)
{
  
    while(*str!='\0')
    {

        if((*str>='0') &&(*str<='9'))
        {
            str++;
        } 
        str++;
    }
        
        printf("%s",str);
        
        
    

}

int main()
{

    char Arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);
    
    

    return 0;
}