#include<stdio.h>
#include<stdlib.h>
// #include<stdbool.h>



int SecMaximum(int Arr[])
{
    int iMax1=Arr[0];
    int iMax2=0;
   for(int i=0;i<4;i++)
   {
        if(Arr[i]>iMax1)
        {
            iMax1=Arr[i];
        }
   }

   for(int i=0;i<4;i++)
   {
        if((Arr[i]>iMax2)&&(Arr[i]!=iMax1))
        {
            iMax2=Arr[i];
        }
   }
   return iMax2;
}

int main()
{
    int iAns=0;

    int iRes[4]={11,21,10,8};
        
    iAns=SecMaximum(iRes);
    printf("OUTPUT: %d",iAns);
    


    return 0;
}