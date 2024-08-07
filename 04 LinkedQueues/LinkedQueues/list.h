#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef int type;
typedef struct node{
    type info;
    struct node *next;
}Node;
typedef struct list{
    Node *head;
    int size;
}List;
void createList(List *l);
int isListEmpty(List l);
int isListFull(List l);
void insertList(List *l , int pos , type item);
type retrieveList(List *l , int pos);
void clearList(List *l);

#endif // LIST_H_INCLUDED
