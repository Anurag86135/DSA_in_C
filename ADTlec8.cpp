// #include<stdio.h>
// #include<stdlib.h>

// struct myArray
// {
//     int total_size;
//     int used_size;
//     int * ptr;
// };

// void createArray(struct myArray*a, int tsize,int usize){
//     // (*a).total_size =tsize;
//     // (*a).used_size =usize;
//     // (*a).ptr=(int*)malloc(tsize * sizeof(int));

//     // we can represent it as this in the form of arrows
//     a-> total_size=tsize;
//     a->used_size=usize;
//     a->ptr=(int *)malloc(tsize* sizeof(int));
// }
// void show (struct myArray*a){
//     for(int i=0;i<a->used_size;i++){
//         printf("%d\n",(a->ptr)[i]);
//     }
// }
// void setVal (struct myArray*a){
//     int n;
//     for(int i=0;i<a->used_size;i++){
//         printf("Enter the elements %d",i);
//         scanf("%d",&n);
//         (a->ptr)[i] =n;
//     }
// }
// int main(){
//     struct myArray marks;
//     createArray(&marks,10,2);
//     printf("We are running setVal now\n");
//     setVal(&marks);
//     printf("we are running show now\n");
//     show(&marks);
//     return 0;
// };


//writing in c++ language

#include<iostream>
using namespace std ;
class MyArray{
    private:
    int total_size;
    int used_size;
    int *ptr;

public:
//contructor(array banane ke liye)
MyArray(int tsize, int usize){
    total_size =tsize;
    used_size = usize;
    ptr= new int [tsize];//malloc ki jagah "new use hota hai
    

}
//function to take values from user
void setVal(){
    for(int i=0;i<used_size;i++){
        cout<<"Enter the element "<<i<<": "  ;
        cin>>ptr[i]; 
     }
}
//function to display values 
void show(){
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<used_size;i++){
        cout<<ptr[i]<<endl;
    }
}

//destructor(memeory free karne ke liye)
~MyArray(){
    delete[] ptr;
}
};
int main(){
    //ek object banaya 
    MyArray marks(10,2);

    cout<<"We are running setVal now"<<endl;
    marks.setVal();
    cout<<"we are running show now"<<endl;
    marks.show();
    return 0;

}






