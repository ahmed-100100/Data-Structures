#include <stdio.h>
#include "stack.h"
int main(){
    Stack s;
    type item;
    createStack(&s);
    push(10,&s);
    push(20,&s);
    push(30,&s);
    push(40,&s);
    push(50,&s);
        while(!isStackEmpty(s)){
            printf("%d\n",pop(&s));
        }
}
