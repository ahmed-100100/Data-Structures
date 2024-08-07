#include<stdio.h>
#include"tree.h"
void printItem(entryType *item){
    printf("%d => ",*item);
}
int main(){
    treeType t;
    createTree(&t);
    fillTreeWithDummyData(&t);
    printf("Tree Size : %d\n",size(t));
    printf("Tree Height : %d\n",height(t));
    printf("In-order: ");
    inorder(t,&printItem);
    printf("\n");
    printf("Pre-order: ");
    preorder(t,&printItem);
    printf("\n");
    printf("Post-order: ");
    postorder(t,&printItem);
    printf("\n");
    clearTree(&t);
    printf("Tree Size : %d\n",size(t));
    printf("Tree Height : %d\n",height(t));
}
