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

void DisplayPallindrome(PNODE head)
{
    PNODE temp=head;
    int iRev=0;
    int iDigit=0;
    int iCopy=0;
   while(temp!=NULL)
   {    
        iCopy=temp->data;
        while (temp->data!=0)
        {
            iDigit=temp->data%10;
            iRev=iRev*10+iDigit;
            temp->data=temp->data/10;
        }
        if(iCopy==iRev)
        {
            printf("| %d |->",iRev); 
        }

        iRev=0; 
        temp=temp->next;

   }
   printf("NULL");
   
   
}

int main()
{
    int no=0;
    int iRes=0;
    // bool bRes=false;
    
    PNODE first=NULL;

    InsertFirst(&first,151);
    InsertFirst(&first,17);
    InsertFirst(&first,121);
    InsertFirst(&first,11);

    
    DisplayPallindrome(first);

    return 0;
}