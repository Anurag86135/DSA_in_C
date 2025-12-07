#include<iostream>
using namespace std;

int MaxArray(int array[],int n){
array[0]=92;

int max=array[0];
for(int i=0;i<n;i++){
    if(array[i]>max){
        max=array[i];

    }
}
return max;
    
}
void PrintArray(int arr[] , int n){
    for (int i=0;i<n;i++){
        cout<<(arr[i])<<" ";
    }
}


int main(){
    int arr[]={22,34,44,55,99};
    int n=5;
   int maxVal=MaxArray(arr,n);
   cout<<"The maximum value of the array is :"<<maxVal;
   cout<<endl;
   cout<<"Array Elements ";
   PrintArray(arr,n);

}