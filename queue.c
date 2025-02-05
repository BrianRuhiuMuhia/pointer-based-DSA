#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;   
    struct Node *next;}Node;
typedef struct Queue{
    struct Node *front, *rear;
    int size;
}Queue;
Queue* create_queue(){
Queue *queue=malloc(sizeof(Queue));
if(queue==NULL)
{
printf("Error Assigning Memory To The Queue");
return;
}
queue->front=NULL;
queue->rear=NULL;
queue->size=0;
return queue;
}
void enqueue(Queue *queue,int item){
if (queue==NULL){
printf("Null Queue");
return;
}
Node *new_node=malloc(sizeof(Node));
if(new_node==NULL){
    printf("Error Assigning Memory To Node");
    return NULL;
};
new_node->data=item;
if(queue->rear==NULL){
    queue->rear=new_node;
    queue->front=new_node;
}
else{
    queue->rear->next=new_node;
    queue->rear=new_node;
}
queue->size++;
}
void denqueu(Queue *queue){
if (queue==NULL){
printf("Null Queue");
return;
};
if(queue->front==NULL){
    printf("Queue is empty");
    return;
    }
if(queue->front->next==NULL){
    queue->front=NULL;
}
Node *next=queue->front->next;
queue->front=next;
queue->size--;
}
void delete_queue(Queue *queue){
Node *node=queue->front;
while(node!=NULL)
{
    Node *next=node->next;
    free(node);
    node=next;
}
free(queue->front);
free(queue->rear);
free(queue);
}



