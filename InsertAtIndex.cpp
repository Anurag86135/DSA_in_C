#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void inLinklistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element :%d\n", ptr->data);
        ptr = ptr->next;
    }
}
// code for insert any node in between the linklist

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr; // previous wale node naye ptr node me link ho jayga
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memmory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second node
    head->data = 114;
    head->next = second;

    // link second and third node
    second->data = 133;
    second->next = third;

    third->data = 152;
    third->next = fourth;

    fourth->data = 171;
    fourth->next = NULL;

    inLinklistTraversal(head);
    printf("%d\n");

    head = insertAtIndex(head,190,1);
    inLinklistTraversal(head);
}
