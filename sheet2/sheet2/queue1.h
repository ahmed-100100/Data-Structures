#ifndef QUEUE1_H_INCLUDED
#define QUEUE1_H_INCLUDED

#define MAX 10
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
int queue_size(Queue q);
Type first_value(Queue q);
Type dequeue_value(Queue q);
Type last_reference(Queue *q);
Type last_value(Queue q);
void destroy_queue(Queue *q);
void cpy_queue(Queue q);
void content(Queue q);

#endif // QUEUE1_H_INCLUDED
