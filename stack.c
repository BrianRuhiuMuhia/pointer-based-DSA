#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
int data;
struct Node* next;
}Node;
typedef struct Stack{
int size;
struct Node* top;
}Stack;
void *create_stack()
{
Stack *stack=malloc(sizeof(Stack));
if(stack==NULL)
{
    printf("Error Assigning Memory");
    exit(1);
}
stack->size=0;
stack->top=NULL;
return stack;
}
void push(Stack *stack,int data)
{
Node *new_node=malloc(sizeof(Node));
if(new_node==NULL)
{
    printf("Error Assigning Memory");
    exit(1);
}
new_node->data=data;
new_node->next=NULL;
if(stack->top==NULL)
{
    stack->top=new_node;
}
else{
    new_node->next=stack->top;
    stack->top=new_node;
}
stack->size++;
}
void pop(Stack *stack)
{
if(stack->top==NULL){
    printf("Empty Stack");
    exit(1);
}
Node *next=stack->top->next;
free(stack->top);
stack->top=next;
stack->size--;
}
int size(Stack *stack)
{
return stack->size;
}