# include<iostream>
using namespace std;

int main(){
    int n=2;
    int isPrime=1;
    for(int i=2;i*i<n;i++){
        if(n%2==0){
            isPrime=0;
        }
    }
    if(isPrime){
        cout<<n<< " is a prime number"<<endl;
    }else{
        cout<<n<<" is not a prime number"<<endl;
    }
    
    return 0;
}
