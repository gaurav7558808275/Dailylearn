#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// create a node
typedef struct Node
{
    int data;
    struct Node* next;
}Node;

struct Node* AddToHead(Node* head, int value, int size )
{
    Node* tempnode = (Node*)malloc(sizeof(Node));
    tempnode->data = value;
    tempnode->next = head;

    return tempnode;
}

void Printlist(Node* Head)
{
    while(Head != NULL)
    {
        printf("%d", Head->data);
        printf("->");
        Head = Head->next;
    }
}
 
int main()
{
    Node* head = NULL;
    // create a linked list.

    head = AddToHead(head,10,sizeof(int));
    head = AddToHead(head,20,sizeof(int));
    head = AddToHead(head,30,sizeof(int));
    head = AddToHead(head,40,sizeof(int));

    Printlist(head);


    return 0;
}