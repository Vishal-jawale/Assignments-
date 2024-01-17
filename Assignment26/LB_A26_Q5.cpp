#include<iostream>
using namespace std;

void StrrevX(char *str)
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
}

int main()
{
    char  Arr[20];
    char cVlaue='\0';
   

    printf("Enter The String\n");
    scanf("%[^'\n']s",Arr);

    

    StrrevX(Arr);
    
    printf("Modified string is %s",Arr);
    

    return 0;
}