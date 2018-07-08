#ifndef LINKEDSTACK_H_GUARD
#define LINKEDSTACK_H_GUARD



int push(struct Stack, int item);
int pop(struct Stack);
int isEmpty(struct Stack);
int size(struct Stack);
struct Stack* init();
void destroy();
void clean();

#endif