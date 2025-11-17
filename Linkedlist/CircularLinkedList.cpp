#include<iostream>
using namespace std;

struct Node{

    int data;
    struct Node *next;

};

void LinkedListTravershal(struct Node *head){
    struct Node *ptr =head;
    do{
        cout<<"Element is  "<<ptr->data<<endl;
        ptr=ptr->next;
    }while(ptr!=head);
}

struct Node * insertAtFirst(struct Node *head,int data){
    struct Node *ptr =(struct Node *)malloc(sizeof(struct Node));
   ptr->data=data;
   
   struct Node *p=head->next;
   while (p->next!=head){
    p=p->next;
   }
   //At this point p points to the last node of this circular linked list
   p->next=ptr;
   ptr->next=head;
   head=ptr;
   return head;

   

}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //Allocate memory for nodes in the linked list in the heap
    head =(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth= (struct Node *)malloc(sizeof(struct Node));

    //link all Nodes one by one
    head->data =4;
    head->next=second;

    second->data =3;
    second->next=third;

    third->data=4;
    third->next=fourth;

    fourth->data=5;
    fourth->next=head;

    cout<<"Circular Linked list before insertion"<<endl;
    LinkedListTravershal(head);
    head=insertAtFirst(head,55);
    cout<<"Circular linked list after insertion"<<endl;
    LinkedListTravershal(head);

    return 0;

}