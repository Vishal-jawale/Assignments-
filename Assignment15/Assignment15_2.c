#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[], int iLength, int iNo)
{   
    int iOccur=0;

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]==iNo)
        {
            iOccur=i;
            break;
        }
        
    }
    return iOccur;
    
}

int main()
{
    int iSize=0;
    int iRet=0;
    int iValue=0;
    int *ptr=NULL;
   

    printf("Enter Number of Elements \n");
    scanf("%d",&iSize);

    printf("Enter Number whose first Occurance you want to Search \n");
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

    
    iRet=FirstOcc(ptr,iSize,iValue);

    printf(" First Occurance of %d is at  : %dth Index",iValue,iRet);


    free(ptr);

    return 0;
}