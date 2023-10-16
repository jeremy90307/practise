//delete node at position n
/*
void Delete(int n)
{
    struct node *temp = head;
    if(n == 1)
    {
        temp = temp->next;
        free(temp);
        return;
    }
    for(int i=0;i<n-2;i++)
        temp = temp->next;         //temp points to (n-1)th node
    struct node *temp2 = temp->next; //nth node
    temp->next = temp2->next;        //(n+1)th node
    free(temp2);                     //delete temp2
}
*/