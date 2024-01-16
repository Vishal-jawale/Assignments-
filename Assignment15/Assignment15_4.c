#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iLength, int iStart, int iEnd)
{   
    for(int  i=0;i<iLength;i++)
    {
        if(Arr[i]>=iStart && Arr[i]<=iEnd)
        {
            printf("%d\t",Arr[i] );
        }
    }
    
}

int main()
{
    int iSize=0;
    int iRet=0;
    int iValue1,iValue2=0;
    int *ptr=NULL;
   

    printf("Enter Number of Elements \n");
    scanf("%d",&iSize);

    printf("Enter Starting Number \n");
    scanf("%d",&iValue1);

    printf("Enter Ending Number \n");
    scanf("%d",&iValue2);

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

    
    Range(ptr,iSize,iValue1,iValue2);

    
    free(ptr);

    return 0;
}