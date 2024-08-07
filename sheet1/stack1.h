#ifndef STACK1_H_INCLUDED
#define STACK1_H_INCLUDED

#define MAX 10
typedef int type;
typedef struct stack{
    int top;
    type items[MAX];
}Stack;
void createStack(Stack *s);
int isEmpty(Stack s);
int isFull(Stack s);
void push(type item , Stack *s);
type pop(Stack *s);
int stack_size(Stack *s);
type first(Stack s);
type pop_value(Stack s);
type last(Stack *s);
type last_value(Stack s);
void destroy(Stack *s);
void cpy(Stack s);
void content(Stack s);
type sumStack(Stack *s);

#endif // STACK1_H_INCLUDED
