#ifndef DSLIST_H_INCLUDED
#define DSLIST_H_INCLUDED

typedef char Type;
typedef struct nodeDSL{
    int key;
    Type info;
    struct nodeDSL *next;
    struct nodeDSL *prev;
}NodeDSL;
typedef struct list{
    NodeDSL *head;
}DSList;
void createDSList(DSList *l);
int isDSListEmpty(DSList l);
int isDSListFull(DSList l);
void insertDSList(DSList *l,int key,Type info);
Type retrieveDSList(DSList *l,int key);
void printDSList(DSList l);

#endif
