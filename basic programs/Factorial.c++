#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=n;i>1;i--){
        fact*=i;

    }
    return fact;
}

int FactorialRecursive(int n)
{
    if(n ==0 || n==1){
        return 1;
    }
    else{

        return n*FactorialRecursive(n-1);

    }
}

int main(){
    int n;
    cout<<" Enter the Value of number for Factorial Calculation \n";
    cin>>n;
//    int result = FactorialRecursive(n);
   int result=factorial(n);
   cout<<(result);

    return 0;












}
