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

int SearchFirstOcc(PNODE head,int no)
{
    int Occur=0;
    while (head!=NULL)
    {
        Occur++;
        if(head->data==no)
        {
            break;
        }
        
        head=head->next;
    }
    return Occur;
    
}

int main()
{
    int no=0;
    int pos=0;
    printf("Input Element: \n");
    scanf("%d",&no);
    PNODE first=NULL;
    InsertFirst(&first,121);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    pos=SearchFirstOcc(first,no);
    printf("OUTPUT: %d\n",pos);
    return 0;
}