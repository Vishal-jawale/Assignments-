
#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[], int iLength)
{   
    int iMax=Arr[0];
    int iMin=Arr[0];

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]<iMin)
        {
            iMin=Arr[i];
        }
        else if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }       
    }
    return iMax-iMin;
    
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

    
    iRet=Difference(ptr,iSize);

    printf(" Difference in  largest and Smallest element are:  %d",iRet);


    free(ptr);

    return 0;
}