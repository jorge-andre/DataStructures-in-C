#ifndef LINKEDSTACK_H_GUARD
#define LINKEDSTACK_H_GUARD

struct node {
    int item; // the data of the node
    struct node *next; // the node below this one on the stack
}

struct stack {
    size_t count; // number of items on the stack
    node *top; // top item of the stack
}

int push(int item);
int pop();
int isEmpty();
int size();
void init();
void destroy();
void clean();

#endif