# include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number till you you want to calculate the sum from 1 :"<<endl;
    cin>>n;
    int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum=sum+i;
    // } //but this step taking more time to run so we use formula for better time complexity


    sum=(n*n+n)/2;// this taking constant time that is O(1) or order of one
    cout<<"The sum of number "<<n<<" is "<<sum<<endl;



    return 0;

}