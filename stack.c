#include "stack.h"

Stack createStack(){
    Stack newStack;
    newStack.top = 0;
    return dishes;
}

int isEmpty(Stack cloneStack) {
    if(cloneStack.top == 0) 
        return 1;
    return 0;
}

int top(Stack cloneStack) {
    if(isEmpty(cloneStack)) {
        printf("\nStack is empty");
        return -1;
    }
    return cloneStack.list[cloneStack.top - 1];
}

void push(Stack *myStack, int value) {
    myStack->list[myStack->top] = value;
    myStack->top = myStack->top + 1;
}

int pop(Stack *myStack) {
    if(isEmpty(*myStack)) {
        printf("\nStack is empty");
        return -1;
    }
    int finalValue = 0;
    finalValue = myStack->list[myStack->top - 1];
    myStack->list[myStack->top - 1] = NULL;
    myStack->top = myStack->top - 1;
    return finalValue;
}