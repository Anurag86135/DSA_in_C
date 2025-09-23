#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size ;
    int top;
    int * arr;
};

int peek(struct stack * sp,int i){
    int arrayInd =sp->top-i+1;
    if(arrayInd<0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}
int isFull(struct stack* ptr){
    if(ptr->top ==ptr->size-1){
        return 1;
    }else return 0;
}

int push(struct stack* ptr,int val){
    if(isFull(ptr)){
        printf("stack Overflow! Cannot push %d to the stack\n",val);
      }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
      }
}

int StackTop(struct stack*sp){
    return sp->arr[sp->top];
}
int StackBottom(struct stack *sp){
    return sp->arr[0];
}
int main(){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=50;
    sp->top= -1;
    sp->arr=(int *)malloc(sp->size *sizeof(int));
    printf("stack has been created successfullu\n");

    push(sp,23);
    push(sp,24);

    push(sp,23);

    push(sp,25);

    push(sp,236);
    push(sp,78);
    push(sp,99);
    push(sp,23);

    push(sp,236);

    push(sp,2545);
    printf("The top most value of the stack is%d\n",StackTop(sp));
    printf("The bottom most value of the stack is %d\n",StackBottom(sp));
   

return 0;

}