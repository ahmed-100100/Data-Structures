#include<stdio.h>
#include "tree.h"
void createTree(treeType *t){*t=NULL;}
int emptyTree(treeType t){return (!t);}
int fullTree(treeType t){return 0;}
/* void inorder(treeType t,void(*pvisit)(entryType*)){
    stack s; nodeTypeype *p=t;
    if(p){
        createStack(&s);
        do{
            while(p){push(p,&s); p=p->left;}
            pop(&s);
            (*pvisit)(&p->info);
            p=p->right);
            }while(!StackEmpty(&s) || p);
}} */
void inorder(treeType t,void(*pvisit)(entryType*)){
    if(t){
            inorder(t->left, pvisit);
            (*pvisit)(&(t->info));
            inorder(t->right, pvisit);
            }
}
void preorder(treeType t,void(*pvisit)(entryType*)){
if(t){
        (*pvisit)(&(t->info));
        preorder(t->left, pvisit);
        preorder(t->right, pvisit);
        }
}
void postorder(treeType t,void(*pvisit)(entryType*)){
if(t){
        postorder(t->left, pvisit);
        postorder(t->right, pvisit);
        (*pvisit)(&(t->info));
        }
}
int size(treeType t){
    if (!t){return 0;}
    return (1+size(t->left)+size(t->right));
}
int height(treeType t){
    if (!t){return 0;}
int a=height(t->left);
int b=height(t->right);
return (a>b)? a : b;
}
void clearTree(treeType *t){
if (*t){
        clearTree(&(*t)->left);
        clearTree(&(*t)->right);
        free(*t);
        *t=NULL;
        }
}
void fillTreeWithDummyData(treeType *t){
    nodeType *n81 = (nodeType *)malloc(sizeof (nodeType));
    nodeType *n22 = (nodeType *)malloc(sizeof (nodeType));
    nodeType *n6  = (nodeType *)malloc(sizeof (nodeType));
    nodeType *n41 = (nodeType *)malloc(sizeof (nodeType));
    nodeType *n18 = (nodeType *)malloc(sizeof (nodeType));
    nodeType *n9  = (nodeType *)malloc(sizeof (nodeType));
    nodeType *n17 = (nodeType *)malloc(sizeof (nodeType));
    n81->info=81; n81->left=NULL; n81->right=NULL;
    n22->info=22; n22->left=NULL; n22->right=n81;
    n6->info=6; n6->left=NULL; n6->right=NULL;
    n41->info=41; n41->left=n22; n41->right=n6;
    n18->info=18; n18->left=NULL; n18->right=NULL;
    n9->info=9; n9->left=n18; n9->right=NULL;
    n17->info=17; n17->left=n41; n17->right=n9;
    *t=n17;
    }
