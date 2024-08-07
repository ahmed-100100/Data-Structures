#include<stdio.h>
#include"stack1.h"
void createStack(Stack *s){
    s->top=-1;
}
int isEmpty(Stack s){
    return s.top==-1;
}
int isFull(Stack s){
    return s.top==MAX-1;
}
void push(type item , Stack *s){
    if(isFull(*s)){printf("ERROR: Stack Overflow!\n");}
    else{s->items[++s->top]=item;}
}
type pop(Stack *s){
    type item;
    if(isEmpty(*s)){printf("ERROR: Stack Underflow!");}
    else{item=s->items[s->top--];}
    return item;
}
int stack_size(Stack *s){
    return s->top+1;
}
type first(Stack s){
    if(isEmpty(s)){printf("ERROR: Stack Is Empty!");}
    else{return s.items[0];}
}
type pop_value(Stack s){
    type item;
    if(isEmpty(s)){printf("ERROR: Stack Underflow!");}
    else{item=s.items[s.top--];}
    return item;
}
type last_value(Stack s){
    return pop_value(s);
}
type last(Stack *s){
    type item;
    if(isEmpty(*s)){printf("ERROR: Stack Underflow!");}
    else{item=s->items[s->top--];}
    return item;
}
void destroy(Stack *s){
    type item;
    while(!isEmpty(*s)){
        item=s->items[s->top--];
    }
}
void cpy(Stack s){
    Stack x;
    createStack(&x);
    type arr[MAX];
    int counter=0;
    while(!(isEmpty(s))){
        arr[counter]=pop(&s);counter++;
    }
    counter=0;
    while(!isFull(x)){
        push(arr[counter] , &x);counter++;
    }
    counter=0;
    while(!(counter==MAX)){
        printf("%d\n" , x.items[counter]);counter++;
    }
}
void content(Stack s){
    while(!isEmpty(s)){
        printf("%d\n",pop(&s));
    }
}
type sumStack(Stack *s){
    int sum=0;
    type item;
    for(int i=s->top ; i>=0 ; i--){
        item=s->items[i];
        sum+=item;
    }
    return sum;
}
