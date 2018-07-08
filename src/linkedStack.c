#include <stdio.h>

#include "stack.h"

struct Node {
    int item; // the data of the node
    struct Node *next; // the node below this one on the stack
};

struct Stack {
    size_t count; // number of items on the stack
    struct Node *top; // top item of the stack
};

struct Stack* init(){
    struct Stack* stack = malloc(sizeof(struct Stack));
    stack->count = 0;
    stack->top = malloc(sizeof(struct Node));
    return stack;
}

int push(struct Stack* stack, int item){
    struct Node* new;
    new->item = item;
    new->next = stack->top;
    stack->top = new; 
    stack->count++;
    return 0;
}

int pop(struct Stack* stack){
    struct Node* old = stack->top;
    stack->top = stack->top->next;
    stack->count--;
    return old->item;
}

int size(struct Stack* stack){
    return stack->count;
}

int isEmpty(struct Stack* stack){
    return stack->count == 0;
}

void clean(struct Stack* stack){
    stack->top = NULL;
    stack->count = 0;
}

void destroy(struct Stack* stack){
    free(stack);
}