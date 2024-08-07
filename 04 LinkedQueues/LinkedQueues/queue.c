#include<stdio.h>
#include"queue.h"
void createQueue(Queue *lq){
    lq->head=NULL;
    lq->rear=NULL;
    lq->size=0;
}
int isQueueFull(Queue lq){
    return 0;
}
int isQueueEmpty(Queue lq){
    return lq.head==NULL;
}
void enqueue(Type item , Queue *lq){
    int pos = lq->size;
    Node *p=(Node *)malloc(sizeof(Node));
    p->info=item;
    p->next=NULL;
    if(pos==0){
        lq->head=p;
        lq->rear=p;
    }
    else{
        lq->rear->next=p;
        lq->rear=p;
    }
    lq->size++;
}
Type dequeue(Queue *lq){
    Type item;
    if(isQueueEmpty(*lq)){printf("ERROR: Queue is Empty!\n");}
    else{
        Node *temp;
        item=lq->head->info;
        temp=lq->head;
        lq->head=lq->head->next;
        free(temp);
        lq->size--;
        }
    if(isQueueEmpty(*lq)){lq->rear=NULL;}
    return item;
}
