#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{   
    bool bFlag=false;

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
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
    int *ptr=NULL;
   

    printf("Enter Number of Elements \n");
    scanf("%d",&iSize);

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

    
    bRet=Check(ptr,iSize);

    if(bRet==true)
    {
        printf("11 is Present \n");
    }
    else
    {
        printf("11 is NOT Present \n");
    }

    free(ptr);

    return 0;
}