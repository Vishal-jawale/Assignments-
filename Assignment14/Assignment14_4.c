#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iLength)
{   
    int iFrequency=0;

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==11)
        {
            iFrequency++;
        }
        
    }
    return iFrequency;
    
}

int main()
{
    int iSize=0;
    int iRet=0;
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

    
    iRet=Frequency(ptr,iSize);

    printf("Result is : %d",iRet);

    free(ptr);

    return 0;
}