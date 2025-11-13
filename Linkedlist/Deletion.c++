# include<iostream>
using namespace std;

struct Node{
    int data ;
    struct Node *next;
};

void Traversing(struct Node *ptr){
    while(ptr!=NULL){
    cout<<"Element :"<<ptr->data<<endl;
    ptr=ptr->next;
    }
}
//Case 1: Deleting the first element from the Linked list
struct Node*deleteFirst(struct Node * head){
    struct Node *ptr=head;
    head=head->next;
    free(ptr);
    return head ;

}

// Case 2: Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node * head,int index){

    struct Node *ptr=head;
    struct Node *q=head->next;
    for(int i=0;i< index-1;i++){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
}

// Case 3:Deleting the last Element
struct Node *DeleteAtLast(struct Node *head){
struct Node *ptr=head;
struct Node *q=head->next;

while(q->next!=NULL){
    ptr=ptr->next;
    q=q->next;

}
ptr->next=NULL;
free(q);
return head;
}
//case 4: Deleting the element with the given value from the linked list
struct Node * DeleteAtValue(struct Node*head,int value){
    struct Node *ptr=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL){

        ptr=ptr->next;
        q=q->next;


    } 
    if(q->data==value){
        ptr->next=q->next;
        free(q);

    }
    return head;
}

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    //Allocate memory for nodes in the linked list in heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=4;
    head->next=second;

    second->data=3;
    second->next =third;

    third->data=5;
    third->next=fourth;

    fourth->data=66;
    fourth->next=NULL;

    cout<<("Linkedlist before deletion")<<endl;
    Traversing(head);
    // head=deleteFirst(head);
    head=deleteAtIndex(head,1);
    // head=DeleteAtLast(head);
    // head=DeleteAtValue(head,5);

    cout<<"LinkedList after deletion"<<endl;
    Traversing(head);
    return 0;

}