#include<stdio.h>

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int arr[100]={1,24,55,4,66};
    display(arr,8);

    return 0;
}