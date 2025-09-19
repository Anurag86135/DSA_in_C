#include<stdio.h>  //code for traversing in doubly linked list and printing its all node's data 
#include<stdlib.h>

//Node structures
struct Node {
    char data;
    struct Node* prev;
    struct Node * next;
};
//function to traverse and print doubly linked list
void traverse(struct Node* head){
    struct Node*temp=head;
    printf("Doubly Linked List Traversal :\n");
    while(temp !=NULL){
        printf("%c\n",temp->data);
        temp =temp->next;
    }
    printf("\n");

}
int main(){
    //Allocate 4 nodes dynamically
    struct Node* head =(struct Node*)malloc(sizeof(struct Node));
    struct Node* second =(struct Node*)malloc(sizeof(struct Node));
    struct Node * third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth =(struct Node*)malloc(sizeof(struct Node));

    //Assign Data
    head-> data ='a';
    second->data ='b';
    third->data ='c';
    fourth->data='d';

    //connect nodes (next and prev pointers)
    head-> prev=NULL;
    head->next=second;

    second->prev=head;
    second->next=third;

    third->prev=second;
    third->next=fourth;

    fourth->prev=third;
    fourth->next=NULL;
    //traverse and print list
    traverse(head);

    //free allocated memory 
    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;

}