#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    printf("That Numbers Are: ");
    
    for(int i=0;i<iLength;i++)
    {
        if(Arr[i]%5==0 && Arr[i]%3==0)
        {
            printf("%d\t",Arr[i]);
        }
    }

}

int main()
{
    int iSize=0;
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

    Display(ptr,iSize);

    free(ptr);

    return 0;
}