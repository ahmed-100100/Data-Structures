#include <stdio.h>
#include "bTree.h"
void printItem(Type *item){
    printf("%d , ",*item);
}
int main(){
    Tree t;
    createTree(&t);
    insertTree(&t,50);
    insertTree(&t,30);
    insertTree(&t,25);
    insertTree(&t,75);
    insertTree(&t,63);
    insertTree(&t,28);
    insertTree(&t,70);
    deleteTree(&t,50);
    printf("Tree Size : %d\n",treeSize(t));
    printf("Tree Height : %d\n",treeHeight(t));
    printf("In-order: ");
    inorder(t,&printItem);
    printf("\n");
}
