#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iSumEven=0;
    int iSumOdd=0;

    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iSumEven=iSumEven+Arr[i];
        }
        else if(Arr[i]%2!=0)
        {
            iSumOdd=iSumOdd+Arr[i];
        }
    }

    return iSumEven-iSumOdd;

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
        scanf("%d ",&ptr[i]);
    }

    iRet=Difference(ptr,iSize);

    printf("Result is %d: \n",iRet);
    free(ptr);

    return 0;
}