#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void inLinkTraversing(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *inserAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memeory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 676;
    head->next = second;

    // link second and third nodes
    second->data = 729;
    second->next = third;

    // link third and fourth nodes
    third->data = 784;
    third->next = fourth;

    // terminate at the node fourth
    fourth->data = 841;
    fourth->next = NULL;

    printf(" the list before Insertion\n");
    inLinkTraversing(head);
    printf("\n");
    printf("the list after insertion\n");
    head = inserAtEnd(head, 576);
    inLinkTraversing(head);
}
