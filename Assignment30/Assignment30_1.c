#include<stdio.h>
#include<stdlib.h>
// #include<stdbool.h>

struct  node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE head, int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
}

void DisplayChkPerfect(PNODE head)
{
    int iSumFact=0;
    int iCnt=0;
    
    while (head!=NULL)
    {
        for(iCnt=1;iCnt<head->data;iCnt++)
        {
            if(head->data%iCnt==0)
            {
                iSumFact=iSumFact+iCnt;
            }
     
        }
            if(iSumFact==head->data)
            {
               printf("|%d|->",head->data);
            }

        head=head->next;
        
        iCnt=0;
        iSumFact=0;
    }
    printf("NULL");
}

// bool ChkPerfect(int no)
// {
    
//     int iSumFact=0;

//     for(int iCnt=1;iCnt<no;iCnt++)
//     {
//         if(no%iCnt==0)
//         {
//             iSumFact=iSumFact+iCnt;
//         }
//     }

//     if(iSumFact==no)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

int main()
{
    int no=0;
    
    // bool bRes=false;
    
    PNODE first=NULL;

    InsertFirst(&first,40);
    InsertFirst(&first,28);
    InsertFirst(&first,20);
    InsertFirst(&first,6);

    // printf("Enter Number\n");
    // scanf("%d",&no);
    // nRes=ChkPerfect(int no)
    // if(bRes==true)
    // {
    //     printf("%d is perfect Number",no);
    //
    //  }
    
    DisplayChkPerfect(first);
    


    return 0;
}