#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

typedef int Type;
typedef struct node{
    Type info;
    struct node *next;
}Node;
typedef struct queue{
    Node *head;
    Node *rear;
    int size;
}Queue;
void createQueue(Queue *q);
int isQueueFull(Queue q);
int isQueueEmpty(Queue q);
void enqueue(Type item , Queue *q);
Type dequeue(Queue *q);

#endif // QUEUE_H_INCLUDED
