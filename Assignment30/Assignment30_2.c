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

void DisplayPrime(PNODE head)
{
    
    int iCnt=0;
    int iFactCnt=0;
    
    while (head!=NULL)
    {
        for(iCnt=1;iCnt<head->data;iCnt++)
        {
            if(head->data%iCnt==0)
            {
                iFactCnt++;         
            }    
        }           

        if(iFactCnt<=1)
        {
            printf("|%d|->",head->data);
        }
        head=head->next;
        
        iCnt=0;
        iFactCnt=0;
        
    }
    printf("NULL");
}

int main()
{
    int no=0;
    
    // bool bRes=false;
    
    PNODE first=NULL;

    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,20);
    InsertFirst(&first,11);

    
    DisplayPrime(first);
    


    return 0;
}