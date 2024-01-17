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

int Addition(PNODE head)
{
    int iAdd=0;
   while(head!=NULL)
    {
        iAdd=iAdd+head->data;
        head=head->next;
    }  

   return iAdd;
   
}

int main()
{
    int no=0;
    int iRes=0;
    // bool bRes=false;
    
    PNODE first=NULL;

    InsertFirst(&first,40);
    InsertFirst(&first,17);
    InsertFirst(&first,20);
    InsertFirst(&first,11);

    
    iRes=Addition(first);
    printf("OUTPUT: %d",iRes);
    


    return 0;
}