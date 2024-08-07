#include <stdio.h>
#include"queue.h"
void printQueue(Type *e){
    printf("%d\n",*e);
}
void incrementQueue(Type *e){
    (*e)++;
}
int main()
{
    Queue q;
    Type item;
    createQueue(&q);
    enqueue(10 , &q);
    enqueue(20 , &q);
    enqueue(30 , &q);
    enqueue(40 , &q);
    enqueue(50 , &q);
    /*while(!isQueueEmpty(q)){
        printf("%d\n",dequeue(&q));
    }*/
    traverseQueue(&q , &printQueue);
    printf("---\n");
    traverseQueue(&q , &incrementQueue);
    traverseQueue(&q , &printQueue);
}
