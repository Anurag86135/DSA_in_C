#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

inLinkTraversing(struct Node* ptr){
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->next;

    }
}
struct Node*insertAtNode(struct Node*head,struct Node*previousNode,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;

    ptr->next=previousNode->next;
    previousNode->next =ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 108;
    head->next = second;

    // link second and third nodes
    second->data = 126;
    second->next = third;

    // link third and fourth nodes
    third->data = 144;
    third->next = fourth;

    // terminiate the list at the fourth node;
    fourth->data = 162;
    fourth->next = NULL;

    inLinkTraversing(head);
    printf("\n");
    // head = insertAtNode(head,second,529);//
    head=insertAtNode(head,second,529);
    inLinkTraversing(head);
    return 0;
}