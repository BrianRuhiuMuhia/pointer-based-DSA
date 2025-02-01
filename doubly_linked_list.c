#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
struct Node *next;
struct Node *prev;
int data;
}Node;
typedef struct List{
    Node *head;
    Node *tail;
    int size;
}List;
void *create_list()
{
List list=(*List)malloc(sizeof(List));
if(list==NULL)
{
    printf("Error Assigning Memory");
    exit(1);
}
return list;
}
void prepend(int data,List list)
{

Node new_node=(*Node)malloc(sizeof(Node));
if(new_node==NULL)
{
    printf("Error Assigning Memory");
    exit(1);
}
if(list==NULL)
{
    printf("Memory Error");
    exit(1);
}
new_node->data=data;
if(list->head==NULL)
{
    list->head=new_node;
    list->tail=new_node;
}
else{
    new_node->next=list->head;
    list->head=new_node;
    list->head->prev=NULL;
}
list->size++;
}
void append(int data,List list)
{
Node new_node=(*Node)malloc(sizeof(Node));
if(new_node==NULL)
{
    printf("Error Assigning Memory");
    exit(1);
}
new_node->data=data;
if(list->head==NULL)
{
list->head=new_node;
list->tail=new_node;}
else{
    new_node->prev=list->tail;
    list->tail=new_node;
}
list->size++;
}
