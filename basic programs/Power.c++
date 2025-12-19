// ?Finding of power of anything?

#include<iostream>
using namespace std;

int main(){
    int m= 2;
    int n = 4;
    int val=1;
    for(int i =0; i<n;i++){
        val = val * m;
    }
    cout<<"The Value of "<<m <<" to the power "<<n<<" is "<<val;
    return 0;
}