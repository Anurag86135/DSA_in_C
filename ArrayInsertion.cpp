#include<stdio.h>

void display(int arr[],int n){
    //code forTraversal
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }
}
int inInsertion(int arr[],int size,int element,int capacity,int index){
    //code for Insertion
    if(size>=capacity){
        printf("%s\n","insertion not happen");
        return-1;
    }
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        printf("%s\n","Insertion happened");
        return 1;
    }

int main()
{
    int arr[5] ={7,8,9,33,234};
    int size=5,element=45,index=3;
    display(arr,size);
   int result= inInsertion(arr,size,element,4,index);
    // size++;
    if(result==1){
        size++;
    display(arr,size);
    printf("insertion done\n");
}
    else{
        printf("not happen some use check!");
    }
    
    
    return 0;
}