#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{   
    int iProduct=1;

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2!=0)
        {
            iProduct=iProduct*Arr[i];
        }
        
    }
    return iProduct;
    
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

    
    iRet=Product(ptr,iSize);

    printf(" Product of ODD elements are:  %d",iRet);


    free(ptr);

    return 0;
}