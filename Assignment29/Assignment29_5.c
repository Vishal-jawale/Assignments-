#include<stdio.h>
#include<stdlib.h>

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

int Smallest(PNODE head)
{
    int iMin=head->data;
    
    while (head!=NULL)
    {
        if(iMin>head->data)
        {
            iMin=head->data;
        }
        head=head->next;
    }
    return iMin;
    
}

int main()
{
    int no=0;
    int res=0;
    
    PNODE first=NULL;

    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    res=Smallest(first);
    printf("OUTPUT: %d\n",res);
    return 0;
}