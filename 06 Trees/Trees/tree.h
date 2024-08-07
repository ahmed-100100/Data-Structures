#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef int entryType;
typedef struct node{
entryType info;
struct node *right;
struct node *left;
}nodeType;
typedef nodeType *treeType;

void createTree(treeType *t);
int emptyTree(treeType t);
int fullTree(treeType t);
void inorder(treeType t,void(*pvisit)(entryType*));
void preorder(treeType t,void(*pvisit)(entryType*));
void postorder(treeType t,void(*pvisit)(entryType*));
int size(treeType t);
int height(treeType t);
void clearTree(treeType *t);
void fillTreeWithDummyData(treeType *t);

#endif // TREE_H_INCLUDED
