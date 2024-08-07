#include <stdio.h>
#include"queue1.h"
int main(){
    Type item;
    int counter=0;
    Queue section_code;
    createQueue(&section_code);
    Queue group_code;
    createQueue(&group_code);
    Queue new_queue;
    createQueue(&new_queue);
    for(int i=0 ; i<MAX && !isQueueFull(section_code); i++){
        enqueue(++counter , &section_code);
    }
    counter=0;
   for(int i=0 ; i<MAX && !isQueueFull(group_code); i++){
        enqueue(counter+=10 , &group_code);
    }
    counter=0;
    for(int i=0 ; i<MAX && !isQueueFull(new_queue); i++){
        enqueue((dequeue(&section_code))*10+dequeue(&group_code) , &new_queue);
    }
    content(new_queue);
}
