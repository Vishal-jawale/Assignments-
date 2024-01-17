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

int Count(PNODE head)
{
    int size=0;
    while (head !=NULL)
    {
        size++;
        head=head->next;
        
    }
    return size;
}

int SearchLastOcc(PNODE head,int no)
{
    
    int Length=0;
    Length=Count(head);
    int arr[Length];


    int Occur=0;
    
        for(int i=0;i<Length;i++)
        {
            arr[i]=head->data;
            
            head=head->next;
        }
    
    
    for(int i=Length-1;i>=0;i--)
    {
        if(arr[i]==no)
        {
            Occur=i+1;
            break;
        }
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
    InsertFirst(&first,30);
    InsertFirst(&first,121);
    InsertFirst(&first,11);
    InsertFirst(&first,30);
    InsertFirst(&first,21);
    InsertFirst(&first,11);


    pos=SearchLastOcc(first,no);
    printf("OUTPUT: %d\n",pos);
    return 0;
}