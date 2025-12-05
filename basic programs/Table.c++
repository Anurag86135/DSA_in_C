// # Writa a prgram to print table of any number

# include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number that you want to be print their table : "<<endl;
    cin>>num;
    cout<<"The table of the the given number"<<num<<" is given below :"<<endl;
    for(int i=0;i<10;i++){
    cout<< num << " X " << i+1 << " = " << (i+1)*num <<endl;

    }
    return 0;
}