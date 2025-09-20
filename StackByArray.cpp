#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack* ptr) {
    return (ptr->top == -1);
}

int isFull(struct stack* ptr) {
    return (ptr->top == ptr->size - 1);
}

void push(struct stack* ptr, int value) {
    if (isFull(ptr)) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("Pushed %d into stack\n", value);
    }
}

void display(struct stack* ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty, nothing to display.\n");
    } else {
        printf("Stack elements are: ");
        for (int i = 0; i <= ptr->top; i++) {
            printf("%d ", ptr->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    // allocate memory for stack structure
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;   // stack size
    s->top = -1;   // initially empty
    s->arr = (int *)malloc(s->size * sizeof(int));

    // push some elements
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);

    // try pushing one more element (will overflow)
    push(s, 60);

    // display stack
    display(s);

    // check if stack is full or empty
    if (isEmpty(s)) {
        printf("The stack is empty\n");
    } else if (isFull(s)) {
        printf("The stack is full\n");
    } else {
        printf("The stack is neither empty nor full\n");
    }

    return 0;
}
