# include<iostream>
using namespace std;

int reverse(int num){
    int rev=0, rem;
    while (num!=0)
    {
        rem=num%10; // last digit of the number
        rev=rev*10+rem;// Generate a number from rev with rem as last digit
        num =num/10;
    }
    return rev;
}

int main(){
    int num=988776;
    int rev=reverse(num);
    cout<<"The reverse number is : "<<rev;
    return 0;
}
