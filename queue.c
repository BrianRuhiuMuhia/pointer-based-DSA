#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
int data;
struct Node* next;
}Node
typedef struct Queue{
int size;
struct Node* top;
struct Node* bottom
}Queue;
void *create_queue()
{
    Queue *queue=malloc(sizeof(Queue));
    if(queue==NULL)
    {
        printf("Error Assigning Memory");
        return queue;
    }
    queue->size=0;
    queue->top=NULL;
    queue->bottom=NULL;
    return queue;
}
void push(Queue *queue,int data)
{
Node *new_node=malloc(sizeof());
if(queue==NULL)
{
    printf("Error");
    exit(1);
}
if(queue->bottom==NULL)
{
queue->top=new_node;
queue->bottom=new_node;
}
else{
queue->bottom->next = new_node;
queue->bottom = new_node;
}
queue->size++;
}
void pop(Queue *queue)
{
    if(queue->size==0)
    {
        printf("empty queue");
        exit(1);
    }
    Node *next_node=malloc(sizeof(Node));
    if(next_node==NULL)
    {
        printf("error assigning memory");
        exit(1);
    }
    next_node=queue->top->next;
    free(queue->top);
    queue->top=next_node;
}
int queue_size(Queue *queue)
{
return queue->size;
}
