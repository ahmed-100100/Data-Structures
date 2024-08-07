#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED



#define MAX 4
typedef int type;
typedef struct stack{
int top;
type items[MAX];
}Stack;
void createStack(Stack *s);
int isStackEmpty(Stack s);
int isStackFull(Stack s);
void push(type item , Stack *s);
type pop(Stack *s);

#endif // STACK_H_INCLUDED
