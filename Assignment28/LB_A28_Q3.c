/* write a program which accept string from user and 
   copy that characters of that string into another 
   string by converting all small characters into 
   capital case .

   Input : "Marvellous Python 2"

   Output : "MARVELLOUS PYTHON 2"
*/

#include<stdio.h>

int  StrCpyCap(char *src,char *dest)
{
        while(*src!='\0')
        {
            if((*src>='a') && (*src<='z'))
            {
                *src=*src-32;
            }
            *dest=*src;
            dest++;
            src++;
        }  
        *dest='\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("enter the string\n");
    scanf("%[^\n]s",&arr);

    StrCpyCap(arr,brr);

    printf("%s",arr);


    return 0;
}