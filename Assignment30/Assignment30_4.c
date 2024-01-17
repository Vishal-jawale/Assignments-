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

int SecMaximum(PNODE head)
{
    PNODE temp=head;
    int iMax1=head->data;
    int iMax2=0;
   while(temp!=NULL)
   {
        for(int i=0;i<4;i++)
        {
            if(temp->data>iMax1)
            {
                iMax1=temp->data;
            }
            temp=temp->next;
        }
   }

    while(head!=NULL)
    {
        for(int i=0;i<4;i++)
        {
            if((head->data>iMax2)&&(head->data!=iMax1))
            {
            iMax2=head->data;
            }
            head=head->next;
        }
    }   
   return iMax2;
   
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

    
    iRes=SecMaximum(first);
    printf("OUTPUT: %d",iRes);
    


    return 0;
}