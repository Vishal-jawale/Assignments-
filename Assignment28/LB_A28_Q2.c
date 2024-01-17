/* write a program which accept string from user and 
   copy that characters of that string into another 
   string by removing all white spaces .

   Input : "Marvel lous Pyth on"

   Output : "MarvellousPython"
*/

#include<stdio.h>

int revwhit(char *src,char *dest)
{
	while(*src!='\0')
	{
		if(((*src>='A')&&(*src<='Z'))||((*src>='a')&&(*src<='z')))
		{
			*dest=*src;
			dest++;
			src++;
		}
		else if (*src==' ')
		{
			src++;
		}
	}
	dest='\0';
}

int main()
{
	char Arr[50];
	char Brr[50];
	
	puts ("Enneter the string\n");
	gets(Arr);
	
	revwhit(Arr,Brr);
	printf("%s",Brr);
	
	return 0;
}