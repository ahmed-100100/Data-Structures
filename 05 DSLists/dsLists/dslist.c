#include <stdio.h>
#include "dslist.h"
void createDSList(DSList *l){l->head=NULL;}
int isDSListEmpty(DSList l){return l.head==NULL;}
int isDSListFull(DSList l){return 0;}
void insertDSList(DSList *l,int key,Type info){
    NodeDSL *p = (NodeDSL *)malloc(sizeof(NodeDSL));
    p->key=key;
    p->info=info;
    NodeDSL *q = l->head;
    if(l->head==NULL){
        p->prev=NULL;
        p->next=NULL;
        l->head=p;
    }
    else{
        while(key>q->key && q->next!=NULL){q=q->next;}
        if(key>q->key && q->next==NULL){
            p->next=NULL;
            p->prev=q;
            q->next=p;
            return;
        }
        p->next=q;
        p->prev=q->prev;
        if(q->prev){q->prev->next=p;}
        else{l->head=p;}
        q->prev=p;
    }
}
Type retrieveDSList(DSList *l, int key){
    if (isDSListEmpty(*l)){
        printf("ERROR: List is Empty!\n");
        return -999;
    }
    else{
        NodeDSL *p=l->head;
        while(p){
            if (p->key == key){
                Type item=p->info;
                if(l->head==p){
                    p->next->prev=NULL;
                    l->head=p->next;
                }
                if (p->prev) {
                    p->prev->next = p->next;
                }
                if (p->next) {
                    p->next->prev = p->prev;
                }
                free(p);
                return item;
            }
            else{
                p=p->next;
                if(p==NULL){printf("ERROR: Key Not Found!");return' ';}
            }
        }
        return -999;
    }
}
void printDSList(DSList l){
    NodeDSL *p = l.head;
    while(p){
        printf("[%d]/[%c] => ",p->key,p->info);
        p=p->next;
    }
}
