#include<stdio.h>
#include"dslist.h"
int main(){
    DSList l;
    createDSList(&l);
    insertDSList(&l,0,'A');
    insertDSList(&l,1,'B');
    insertDSList(&l,2,'C');
    insertDSList(&l,3,'D');
    insertDSList(&l,4,'E');
    printf("%c\n\n",retrieveDSList(&l,0));
    printDSList(l);
    printf("\n\n");
}
