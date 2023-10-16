#include <stdio.h>
#include <stdint.h>

struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

void Insert(int data,int n)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(n == 1)
    {
        temp->next = head;
        head = temp;
        return;                      //return to main
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
    printf("\n");
}
//delete node at position n
void Delete(int n)
{
    struct node *temp = head;
    if(n == 1)
    {
        head = temp->next;
        free(temp);
        return;
    }
    for(int i=0;i<n-2;i++)
        temp = temp->next;           //temp points to (n-1)th node
    struct node *temp2 = temp->next; //nth node
    temp->next = temp2->next;        //(n+1)th node
    free(temp2);                     //delete temp2
}

void Reverse()
{
    struct node *current=head;
    struct node *prev=NULL;
    struct node *next;
    
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    
}

int main(){
    Insert(2,1);
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    printlinkedlist();
    
    int n;
    printf("enter a position:");
    scanf("%d",&n);
    Delete(n);
    printlinkedlist();
    printf("Reverse...\n");
    Reverse();
    printlinkedlist();
    system("PAUSE");
    return 0;
}