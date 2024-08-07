#ifndef BTREE_H_INCLUDED
#define BTREE_H_INCLUDED

typedef int Type;
typedef struct nodeT{
    Type info;
    struct nodeT *right;
    struct nodeT *left;
}NodeT;
typedef NodeT *Tree;

void createTree(Tree *t);
int isTreeEmpty(Tree t);
int isTreeFull(Tree t);
void inorder(Tree t, void (*pvisit) (Type*));
void preorder(Tree t, void (*pvisit) (Type*));
void postOrder(Tree t, void (*pvisit) (Type*));
int treeSize(Tree t);
int treeHeight(Tree t);
void clearTree(Tree *t);
void fillTreeWithDummyData(Tree *t);
void insertTree(Tree *t, Type item);
int deleteTree(Tree *t, Type item);

#endif // BTREE_H_INCLUDED
