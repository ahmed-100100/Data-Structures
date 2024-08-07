#include<stdio.h>
#include<stdlib.h>
#include"list.h"
void createList(List *l){l->head=NULL;l->size=0;}
int isListEmpty(List l){return l.head==NULL;}
int isListFull(List l){return 0;}
void insertList(List *l,int pos,type item){
    if(pos>=0&&pos<=l->size){
        Node *p=(Node *)malloc(sizeof(Node));
        p->info=item;
        p->next=NULL;
        if (pos==0){
            p->next=l->head;
            l->head=p;
            }
            else{
                Node *q=l->head;
                for (int i=0 ; i<pos-1&&q!=NULL ; i++){q=q->next;}
                if (q==NULL){
                    printf("ERROR: Invalid position!\n");
                    free(p);
                    return;
                }
                p->next=q->next;
                q->next=p;
        }
    }
    l->size++;
}
type retrieveList(List *l , int pos){
        type item;
    if(pos>=0&&pos<l->size){
        if(isListEmpty(*l)){
            printf("ERROR: List is Empty!\n");
        }
        else{
            Node *q , *temp;
            if(pos==0){
                item=l->head->info;
                temp=l->head;
                l->head=l->head->next;
                free(temp);
            }
            else{
                q=l->head;
                for(int i=0 ; i<pos-1 ; i++){
                    q=q->next;
                    item=q->next->info;
                    temp=q->next;
                    q->next=temp->next;
                    free(temp);
                    }
            }
            l->size--;
        }
    }
    return item;
}
void clearList(List *l){
    Node *q;
    while(l->head){
        q=l->head;
        l->head=l->head->next;
        free(q);
    }
    l->size=0;
}
