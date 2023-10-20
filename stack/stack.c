#include <stdio.h>
#define max 101

int A[max];
int top = -1;
void push(int x)
{
    if(top == max -1)
    {
        printf("overflow\n");
        return;
    }
    top++;
    A[top] = x;

}
void pop()
{
    if(top == -1)
    {
        printf("NO ELEMENT TO POP\n");
        return;
    }
    top--; 
}
int Top()
{
    return A[top];
}
void Print()
{
    int i;
    printf("stack:");
    for(i=0;i<=top;i++)
        printf("%d ",A[i]);
    printf("\n");
}
int main()
{
    push(2);
    Print();
    push(3);
    Print();
    push(5);
    Print();
    pop();
    Print();
    push(6);
    Print();
    printf("top:%d\n",Top());
    return 0;
}