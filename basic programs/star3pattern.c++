# include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n :"<<endl;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}