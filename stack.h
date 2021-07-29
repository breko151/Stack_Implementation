#include <stdio.h>
#include <stdlib.h>
#define RANGE 100

typedef struct {
    int top;
    int list[RANGE];
} Stack;

Stack createStack();

int isEmpty(Stack);

void push(Stack *, int);

int pop(Stack *);

int top(Stack);