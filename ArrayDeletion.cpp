#include<stdio.h>

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
 printf("\n");
}


void inDeletion(int arr[],int size,int index)
{
    //code for deletion
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}
int main(){
    int arr[100]={4,3,66,77,80};
    int size=5,index=2;
    display(arr,size);
    inDeletion(arr,size,index);
    size--;
    display(arr,size);

    return 0;
}
