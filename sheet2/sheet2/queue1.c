#include"queue1.h"
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
int queue_size(Queue q){
    return q.rear+1;
}
Type first_value(Queue q){
    if(isQueueEmpty(q)){printf("ERROR: Queue Is Empty!");}
    else{return q.items[q.front];}
}
Type dequeue_value(Queue q){
    Type item;
    if(isQueueEmpty(q)){printf("ERROR: Queue Is Empty!");}
    else{
        item = q.items[q.front];
        q.front=(q.front+1)%MAX;
        q.size--;
    }
    return item;
}
Type last_reference(Queue *q){
    return q->items[q->rear];
}
Type last_value(Queue q){
    return dequeue_value(q);
}
void destroy_queue(Queue *q){
    while(!isQueueEmpty(*q)){
        q->front=(q->front+1)%MAX;
        q->size--;
    }
}
void cpy_queue(Queue q){
    Queue k;
    Type item;
    createQueue(&k);
    Type arr[MAX];
    int counter=0;
    while(!(isQueueEmpty(q))){
        arr[counter]=dequeue(&q);counter++;
    }
    counter=0;
    while(!isQueueFull(k)){
        enqueue(arr[counter] , &k);counter++;
    }
    counter=0;
    while(!(counter==MAX)){
        printf("%d\n" , k.items[counter]);counter++;
    }
}
void content(Queue q){
    Type item;
    while(!isQueueEmpty(q)){
        printf("%d\n",dequeue(&q));
    }
}
