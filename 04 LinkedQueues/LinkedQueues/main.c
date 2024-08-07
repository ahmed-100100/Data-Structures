#include <stdio.h>
#include"queue.h"
int main(){
    Queue q;
    Type item;
    createQueue(&q);
    enqueue(10 , &q);
    enqueue(20 , &q);
    enqueue(30 , &q);
    enqueue(40 , &q);
    enqueue(50 , &q);
    while(!isQueueEmpty(q)){printf("%d\n",dequeue(&q));}
}
