#include"queue.h"
void createQueue(Queue *q){
    q->front=0;
    q->rear=MAX-1;
    q->size=0;
}
int isQueueFull(Queue q){
    return q.size==MAX;
}
int isQueueEmpty(Queue q){
    return q.size==0;
}
void enqueue(Type item , Queue *q){
    if(isQueueFull(*q)){printf("ERROR: Queue Is Full!\n");}
    else{
        q->rear=(q->rear+1)%MAX; //To Circulate The Queue.
        q->items[q->rear]=item;
        q->size++;
    }
}
Type dequeue(Queue *q){
    Type item;
    if(isQueueEmpty(*q)){printf("ERROR: Queue Is Empty!\n");}
    else{
        item = q->items[q->front];
        q->front=(q->front+1)%MAX; //To Circulate The Queue.
        q->size--;
        return item;
    }
}
void traverseQueue(Queue *q , void(*f)(Type*)){
    for(int i=q->front,count=0 ; count<q->size ; count++){
        (*f)(&q->items[i]);
        i=(i+1)%MAX;
    }
}
