#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{   
    bool bFlag=false;

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==iNo)
        {
            bFlag=true;
        }        
    }
    
    return bFlag;
}

int main()
{
    int iSize=0;
    bool bRet=false;
    int iValue=0;
    int *ptr=NULL;
   

    printf("Enter Number of Elements \n");
    scanf("%d",&iSize);

    printf("Enter Number  you want to Search \n");
    scanf("%d",&iValue);

    ptr=(int*)malloc(iSize*sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to Allocate the Memory\n");
    }
    
    printf("Enter The Elements\n");

    for(int i=0;i<iSize;i++)
    {
        scanf("%d",&ptr[i]);
    }

    
    bRet=Check(ptr,iSize,iValue);

    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    free(ptr);

    return 0;
}