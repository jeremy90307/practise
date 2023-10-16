#include <stdio.h>
#include <stdint.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void InsertAtBegin(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head; //指向就的node lk->next = NULL;
    head = temp;       //指向新的node
}
void InsertAtEnd(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;

    struct node *linkedlist = head;
    while(linkedlist->next != NULL)
        linkedlist = linkedlist->next;

    linkedlist->next = temp; 
}
void InsertAtMiddle(struct node *list,int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = list->next;
    list->next = temp;
}
void printlinkedlist()
{
    struct node *p = head;
    while(p != NULL)
    {
        printf(" %d ",p->data);
        p = p->next;
    }
}
void DeletAtBegin()
{
    head = head->next;
}

int main(){
    printf("how many numbers?\n");
    int x,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the number \n");
        scanf("%d",&x);
        InsertAtBegin(x);
    }
    //InsertAtEnd(33);
    //InsertAtMiddle(head->next,66);
    printlinkedlist();
    
    return 0;
}