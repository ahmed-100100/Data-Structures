#include<stdio.h>
#include "stack.h"
void createStack(Stack *ls){
    ls->head=NULL;
}
int isStackEmpty(Stack ls){
    return ls.head==NULL;
}
int isStackFull(Stack ls){
    return 0;
}
void push(type item , Stack *ls){
    Node *p=(Node *)malloc(sizeof(Node));
    p->info=item;
    p->next=ls->head;
    ls->head=p;
}
type pop(Stack *ls){
    type item;
    if(isStackEmpty(*ls)){
        printf("ERROR: List is Empty!\n");
    }
    else{
        Node *q , *temp;
        item=ls->head->info;
        temp=ls->head;
        ls->head=ls->head->next;
        free(temp);
    }
    return item;
}
type peek(Stack ls){
    return ls.head->info;
}
