#include<stdio.h>
#include <stdlib.h>
#include "bTree.h"
void createTree(Tree *t){*t=NULL;}
int isTreeEmpty(Tree t){return (!t);}
int isTreeFull(Tree t){return 0;}
void inorder(Tree t,void(*pvisit)(Type*)){
    if(t){
            inorder(t->left, pvisit);
            (*pvisit)(&(t->info));
            inorder(t->right, pvisit);
            }
}
void preorder(Tree t,void(*pvisit)(Type*)){
if(t){
        (*pvisit)(&(t->info));
        preorder(t->left, pvisit);
        preorder(t->right, pvisit);
        }
}
void postorder(Tree t,void(*pvisit)(Type*)){
if(t){
        postorder(t->left, pvisit);
        postorder(t->right, pvisit);
        (*pvisit)(&(t->info));
        }
}
int treeSize(Tree t){
    if (!t){return 0;}
    return (1+treeSize(t->left)+treeSize(t->right));
}
int treeHeight(Tree t){
    if (!t){return 0;}
int a=treeHeight(t->left);
int b=treeHeight(t->right);
return (a>b)? 1+a : 1+b;
}
void clearTree(Tree *t){
if (*t){
        clearTree(&(*t)->left);
        clearTree(&(*t)->right);
        free(*t);
        *t=NULL;
        }
}
void fillTreeWithDummyData(Tree *t){
    NodeT *n81 = (NodeT *)malloc(sizeof (NodeT));
    NodeT *n22 = (NodeT *)malloc(sizeof (NodeT));
    NodeT *n6  = (NodeT *)malloc(sizeof (NodeT));
    NodeT *n41 = (NodeT *)malloc(sizeof (NodeT));
    NodeT *n18 = (NodeT *)malloc(sizeof (NodeT));
    NodeT *n9  = (NodeT *)malloc(sizeof (NodeT));
    NodeT *n17 = (NodeT *)malloc(sizeof (NodeT));
    n81->info=81; n81->left=NULL; n81->right=NULL;
    n22->info=22; n22->left=NULL; n22->right=n81;
    n6->info=6; n6->left=NULL; n6->right=NULL;
    n41->info=41; n41->left=n22; n41->right=n6;
    n18->info=18; n18->left=NULL; n18->right=NULL;
    n9->info=9; n9->left=n18; n9->right=NULL;
    n17->info=17; n17->left=n41; n17->right=n9;
    *t=n17;
    }
void insertTree(Tree *t, Type item) {
    NodeT *p=(NodeT *)malloc(sizeof(NodeT));
    p->info=item;
    p->left=NULL;
    p->right=NULL;
    if(!(*t)){*t=p;}
    else {
        NodeT *pre,*cur;
        cur=*t;
        while(cur){
            pre=cur;
            if(item<cur->info){cur=cur->left;}
            else{cur=cur->right;}
        }
        if(item<pre->info){pre->left=p;}
        else {pre->right=p;}
    }
}
void deleteNode(Tree *pt){
    NodeT *cur=*pt;
    if(!(cur)->left){*pt=(cur)->right;}
    else if(!(cur)->right){*pt=(cur)->left;}
    else{
        cur=(cur)->left;
        NodeT *pre=NULL;
        while(cur->right){
            pre=cur;
            cur=cur->right;
        }
        (*pt)->info=cur->info;
        if(pre){pre->right=cur->left;}
        else{(*pt)->left=cur->left;}
        }
        free (cur);
}
int deleteTree(Tree *t, Type item){
    int found=0;
    NodeT *cur=*t;
    NodeT *pre=NULL;
    while(cur&&!(found=(item==cur->info))){
        pre = cur;
        if (item < cur->info){cur=cur->left;}
        else{cur=cur->right;}
    }
    if(found){
        if(!pre){ //Case of deleting the root
        deleteNode(t);}
        else if((item<pre->info)){deleteNode(&pre->left);}
        else{deleteNode(&pre->right);}
    }
        return found;
}
