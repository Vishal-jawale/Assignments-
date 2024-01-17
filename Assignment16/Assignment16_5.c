
#include<stdio.h>
#include<stdlib.h>


void DigitSum_Display(int Arr[], int iLength)
{   
    int iDigit=0;
    int Copy=0;
    int DigitSum=0;

    for(int i=0;i<iLength;i++)
    {
        Copy=Arr[i];
        while (Copy!=0)
        {
            iDigit=Copy%10;
            DigitSum=DigitSum+iDigit;
            Copy=Copy/10;
        }
        printf("%d \t",DigitSum);
        DigitSum=0;                
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

    
    DigitSum_Display(ptr,iSize);

    

    free(ptr);

    return 0;
}