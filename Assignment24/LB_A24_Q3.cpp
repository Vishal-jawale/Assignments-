#include<iostream>
using namespace std;

int CountSmall(char *str1)
{
    int iCnt1,iCnt2=0;

    


    while(*str1!='\0')
    {
        if((*str1>='a')&&(*str1<='z'))
        {
        iCnt1++;
        str1++;
        }
    }

    
    return iCnt1;

}
int CountCapital(char *str)
{
    int iCnt2=0;

    


    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        iCnt2++;
        str++;
    }
    return iCnt2;

}

int main()
{

    char Arr[20];
    int iRet1=0;
    int iRet2=0;
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);

    iRet1=CountSmall(Arr);
    iRet2=CountCapital(Arr);

    printf("%d",iRet=iRet1-iRet2);

    return 0;
}