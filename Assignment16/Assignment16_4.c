
#include<stdio.h>
#include<stdlib.h>


void Digits(int Arr[], int iLength)
{   
    int iDigit=0;
    int iDigitCnt=0;
    int Copy=0;

    for(int i=0;i<iLength;i++)
    {
        Copy=Arr[i];
        while (Copy!=0)
        {
            iDigit=Copy%10;
            iDigitCnt++;
            Copy=Copy/10;
        }

        if(iDigitCnt!=3)
        {
            iDigitCnt=0;
        }
        else if(iDigitCnt==3)
        {
        printf("%d \t",Arr[i]);
        iDigitCnt=0;
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

    
    Digits(ptr,iSize);

    

    free(ptr);

    return 0;
}