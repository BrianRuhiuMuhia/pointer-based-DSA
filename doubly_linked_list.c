#include <stdlib.h>
#include <string.h>
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
List* create_list(){
List *list=malloc(sizeof(List));
if(list==NULL){
    printf("error assigning Memory");
    return;
};
list->head=NULL;
list->tail=NULL;
list->size=0;
return list;
}
void prepend(int data,List *list){
Node *new_node=malloc(sizeof(Node));
if(new_node == NULL||list==NULL){
    printf("error assigning Memory");
    return;
}
new_node->data=data;
if(list->head==NULL){
    list->head=list->tail=new_node;
}
else{
    new_node->next=list->head;
    list->head=new_node;
}
list->size++;
}
void append(int data,List *list){
Node *new_node=malloc(sizeof(Node));
if(new_node == NULL||list==NULL){
    printf("error assigning Memory");
    return;
}
new_node->data=data;
if(list->head==NULL){
    list->head=list->tail=new_node;
}
else{
    list->tail->next=new_node;
    list->tail=new_node;
}
list->size++;
}
Node delete_node(List *list,int pos){
Node *curr=list->head;
for(int i=0;i<pos-1;i++){
curr=curr->next;
}
Node *delete_node=curr->next;
curr->next=delete_node->next;
delete_node->next->prev=curr;
list->size--;
}
void print(List *list){
Node *curr=list->head;
while(curr!=NULL){
    printf(curr->data);
    curr=curr->next;
};
}
int get_size(List *list)
{
    return list->size;
}