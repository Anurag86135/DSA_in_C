#include<iostream>
using namespace std;

int main(){
    int num;
    int counter=0;
    
    cout<<"Enter the number :"<<endl;
    cin>>num;
    int number=num;

    if(num==0){

        cout<<"This number has only 1 digit"<<endl;


    }else{

    
    while(num!=0){
        num=num/10;
        counter++;


    }
     cout<<"The number "<<number<<" has "<<counter<<" digits";
}
   
    return 0;
}