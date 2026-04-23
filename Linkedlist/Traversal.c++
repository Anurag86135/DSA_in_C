#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node* next;

};
void Travershal(struct Node *ptr){
    while(ptr!=NULL){
    cout<<"Element :"<<ptr->data<<endl;
    ptr=ptr->next;
    }
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=11;
    head->next=second;

    second->data=12;
    second->next=third;
    
    third->data=13;
    third->next=fourth;

    fourth->data=99;
    fourth->next=fifth;

    fifth->data=22;
    fifth->next=NULL;

    Travershal(head);
    return 0;


}