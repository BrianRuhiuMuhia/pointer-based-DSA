#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
struct Node *next;
int data;
}Node;
typedef struct list{
    Node *head;
    int size;
}list;
void insert(int data,list *list_ptr)
{
Node *new_node=malloc(sizeof(Node));
if(new_node==NULL || list_ptr==NULL)
{
    printf("memory error");
    exit(1);
}
new_node->data=data;
if(list_ptr->head==NULL)
{
    list_ptr->head->next=new_node;
}
else{
    new_node->next=list_ptr->head;
    list_ptr->head=new_node;
}
list_ptr->size++;
}
void delete(list *list_ptr,int pos)
{
if(list_ptr==NULL)
{
    printf("memory error");
    exit(1);
}
if(pos>list_ptr->size || pos<0)
{
printf("position should be greater than or equal to 0");
return;
}
if(pos==0)
{
    list->head=list->head->next;
}
Node *curr=malloc(sizeof(Node));
if(curr==NULL)
{
    printf("memory error");
    exit(1);
}
curr=list_ptr->head;
for(int i=0;i<pos-1;i++)
{
curr=curr->next;
}
Node *deleted_node=malloc(sizeof(Node));
deleted_node=curr->next;
curr->next=deleted_node->next;
free(deleted_node);
free(curr);
}
void print(list *list_ptr)
{
Node *curr=malloc(Node);
while(curr!=NULL)
{
    printf("valu:%d",curr->data);
    curr=curr->next;
}
}
void free_list(list * list_pointer)
{
Node *curr=malloc(Node);
Node *temp;
if(curr==NULL)
{
printf("memory error");
exit(1);
}
while(curr!=NULL)
{
temp=curr->next;
free(curr);
curr=temp;
}
free(list_pointer);
}
void *create_list()
{
    list *new_list=malloc(list);
return new_list;
}
