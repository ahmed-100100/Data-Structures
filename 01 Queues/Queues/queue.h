#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#define MAX 5
typedef int Type;
typedef struct queue{
    int front;
    int rear;
    int size;
    Type items[MAX];
}Queue;
void createQueue(Queue *q);
int isQueueFull(Queue q);
int isQueueEmpty(Queue q);
void enqueue(Type item , Queue *q);
Type dequeue(Queue *q);
void traverseQueue(Queue *q , void(*f)(Type*));

#endif // QUEUE_H_INCLUDED
