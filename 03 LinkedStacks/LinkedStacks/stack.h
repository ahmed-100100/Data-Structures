#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef int type;
typedef struct node{
    type info;
    struct node *next;
}Node;
typedef struct stack{
    Node *head;
}Stack;
void createStack(Stack *ls);
int isStackEmpty(Stack ls);
int isStackFull(Stack ls);
void push(type item , Stack *ls);
type pop(Stack *ls);

#endif // STACK_H_INCLUDED
