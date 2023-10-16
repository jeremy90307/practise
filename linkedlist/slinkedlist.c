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
    struct node *lk = (struct node *)malloc(sizeof(struct node));
    lk->data = data;
    lk->next = head; //指向就的node
    head = lk;       //指向新的node
}
void InsertAtEnd(int data)
{
    struct node *lk = (struct node *)malloc(sizeof(struct node));
    lk->data = data;

    struct node *linkedlist = head;
    while(linkedlist->next != NULL)
        linkedlist = linkedlist->next;

    linkedlist->next = lk; 
}
void InsertAtMiddle(struct node *list,int data)
{
    struct node *lk = (struct node *)malloc(sizeof(struct node));
    lk->data = data;
    lk->next = list->next;
    list->next = lk;
}
void printlinkedlist()
{
    struct node *p = head;
    while(p->next != NULL)
    {
        printf("%d",p->data);
        p = p->data;
    }
}
