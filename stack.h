#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top;
    int list[100];
} Stack;

Stack createStack();

int isEmpty(Stack);

void push(Stack *, int);

int pop(Stack *);

int top(Stack);