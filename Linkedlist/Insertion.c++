#include<iostream>
using namespace std;


struct Node{
    int data;
    struct Node *next;


};

void linkedTravershal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;

    }
}

//case 1
struct Node *insertAtFirst(struct Node *head,int data){
    struct Node *ptr=(struct Node *)malloc (sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

//case 2
struct Node *insertAtIndex(struct Node*head,int data,int index)
{
    struct Node *ptr =(struct Node *)malloc(sizeof(struct  Node));
    struct Node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
//case 3: insertion at end
struct Node * insertAtEnd(struct Node *head,int data){
    struct Node *ptr=(struct Node*)malloc (sizeof(struct Node));
    ptr->data=data;
    struct Node * p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

//case 4 Insert After Node

struct Node * insertAfterNode(struct Node *head,struct Node*prevNode ,int data){
  struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    ptr->next=prevNode->next;
    prevNode->next=ptr;
    return head;
}
int main(){
    struct Node*head;
    struct Node*second;
    struct Node*Third;
    struct Node *fourth;

    //Allocate memory 
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    Third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=12;
    head->next=second;

    second->data=13;
    second->next=Third;

    Third->data=14;
    Third->next=fourth;

    fourth->data=15;
    fourth->next=NULL;
    cout<<"LinkedList before insertion"<<endl;
    linkedTravershal(head);
    head=insertAtFirst(head,55);
    head=insertAtIndex(head,55,1);
    head=insertAtEnd(head,90);
    head=insertAfterNode(head,Third,88);
    cout<<"Linked list after insertion"<<endl;
    linkedTravershal(head);
    return 0;
}