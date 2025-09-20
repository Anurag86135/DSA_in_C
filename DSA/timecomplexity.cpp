// #include<iostream>
// using namespace std;
// void func(int n){
//     int sum=0;
//     int product=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<i<<"\n"<<j;
//         }
//     }
// }
// int main()
// {
//     func(4);
//     return 0;
// }


// Consider the recursive algorith below, where the random(int n) spends one unit of time to return a 
// random integer which is evenly distributed within the range [0,n].If the average processing time is T(n), what is the value of t(6).
#include<iostream>
using namespace std;
int random(int a){
    int i;
    int num =(rand()%(a+1));
    return num;
}
int function(int n){
    int i;
    if(n<=0)
    {
        return 0;
    }
    else{
        i=random(n-1);
        cout<<"this:"<<endl;
        return function(i) + function(n -1-i);

    }
}
int main(){
    function(6);
    return 0;
}