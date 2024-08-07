#include "stack.h"
void createStack(Stack *s){
    s->top = -1;
}
int isStackEmpty(Stack s){
    /*if(s.top==-1){return 1;}
    else{return 0;}*/
    return s.top==-1;
}
int isStackFull(Stack s){
    /*if(s.top==MAX-1){return 1;}
    else{return 0;}*/
    return s.top==MAX-1;
}
void push(type item , Stack *s){
    /*s->top++;
    s->items[s->top] = item;*/
    //s->items[++s->top] = item;
    /*if(s.top==MAX-1){printf("ERROR: Stack Overflow!\n");}
    else{s->items[++s->top] = item;}*/
    if(isStackFull(*s)){printf("ERROR: Stack Overflow!\n");}
    else{s->items[++s->top] = item;}
}
type pop(Stack *s){
    type item;
    if(isStackEmpty(*s)){printf("ERROR: Stack Underflow!\n");}
    else{item = s->items[s->top--];}
    return item;
}
