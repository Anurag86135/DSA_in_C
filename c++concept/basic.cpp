#include <iostream>
using namespace std;
void func(int array[], int length){
    int sum =0;
    int product =31;
    for(int i=0;i<length;i++){
        sum+=array[i];
    }
    for(int j=0;j<length;j++){
        product*=array[j];
    }
}

int main()
{
    int arr[]={3,4,66};
    func(arr,3);
    return 0;
}