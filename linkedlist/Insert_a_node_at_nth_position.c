#include <stdio.h>
#include <stdint.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

void Insert(int data,int n)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(n == 1)
    {
        temp->next = head;
        head = temp;
        return;                      //return沒加會無限循環
    }
    struct node *temp2 = head;
    for(int i=0;i<n-2;i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;

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


int main(){
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);


    printlinkedlist();
    
    return 0;
}