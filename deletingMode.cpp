#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;

};

void inLinkedTraversing(struct Node *head){
    struct Node*ptr= head;
    while(ptr!=NULL){
        printf("Element :%d\n ",ptr->data);
        ptr=ptr->next;
    }

}
//case1:deleting the first Node;
struct Node*deleteFirst(struct Node*head){
    struct Node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

//case 2:Deleting the element at a given index from the linked list
struct Node*deleteIndex(struct Node*head,int index){
    struct Node*ptr=head;
    struct Node*q=head->next;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
}
//case 3:Deleting the last Node
struct Node* DeletingLast(struct Node*head){
    struct Node*ptr=head;
    struct Node*q=head->next;
    while(q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=q->next;
    // ptr->next=NULL;
    free(q);
    return head;
}

//Case 4:Deleting a Node by given Value
struct Node*deletebyValue(struct Node* head ,int value){
    struct Node*ptr=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL){
        ptr=ptr->next;
        q=q->next;
    }
    if(q->data== value){
        ptr->next=q->next;
        free(q);

    }if(q->next==NULL){
        printf("your Node or that taken your value is node given in this linked List");
    }
    return head;
}

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;

    //Allocate memory for nodes in the linked list in heap

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=114;
    head->next=second;

    //link second and third node
    second->data=133;
    second->next=third;
   
    //link third and fourth node
    third->data=152;
    third->next=fourth;

    //terminate the linklist with fourth node
    fourth->data=171;
    fourth->next=NULL;


    printf("Linked List before Deleting \n");
    
    inLinkedTraversing(head);
    printf("\n");
    printf("After Deletion\n");
    //  head=deleteIndex(head,2);
    // head=DeletingLast(head);
    head=deletebyValue(head,133);
    inLinkedTraversing(head);
    return 0;
}
