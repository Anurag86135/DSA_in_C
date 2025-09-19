#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// code for Traversing in circular LinkList
void LinkedListTraversal(struct Node* head){
    struct Node* ptr=head;
    do{
        printf("Elements is %d\n:",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);

}
struct Node*insertAtFirst(struct Node *head,int data){
    struct Node * ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node *p =head->next;
    while(p->next!=head){
        p=p->next;
    }
    // at this point p points to the last node of this circular linked list

    p->next =ptr;
    ptr->next =head;
    head =ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node*fourth;

    //Allocate memeory for the nodes in the list in heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));


    // link first and second nodes

    head->data=108;
    head->next=second;

    // link second and third
    second->data=126;
    second->next=third;

    //link third and fourth node
    third->data=144;
    third->next=fourth;

    //link fourth and head
    fourth->data=162;
    fourth->next=head;

    printf("circular linked list before inserting\n");
    LinkedListTraversal(head);
    head=insertAtFirst(head,180);
    head=insertAtFirst(head,90);

    printf("Circular linked list after insertion \n");
    LinkedListTraversal(head);

    


return 0;
}