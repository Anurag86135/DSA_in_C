#include<stdio.h>

//note : Array should be shorted in binary search
int binarySearch(int arr[],int size,int element){
    int low=0;
    int mid=0;
    int high=size-1;
    //start searching
    while(low<=high){//keep searching until low <=high
        mid=(low+high)/2;
        if(arr[mid] ==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return-1;
}
int main(){
    int arr[]={22,43,54,65,76,79,87};
    int size=sizeof(arr)/sizeof(int);
    int element;
    printf("Enter the value of element");
    scanf("%d",&element);
    // int element=43;
    int searchindex=binarySearch(arr,size,element);
    printf("the element %d found at  index no.%d",element,searchindex);
    return 0;
}