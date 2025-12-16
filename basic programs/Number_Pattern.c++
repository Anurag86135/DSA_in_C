#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: "<<endl;
    cin>>n;

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                cout<<(i);
            }else{
                cout<<(" ");
            }
        }
        cout<<endl;
    }
}