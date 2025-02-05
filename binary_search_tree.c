#include <string.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
int data;
struct Node* left;
struct Node* right;
}Node;
typedef struct Tree{
    Node* root;
    int size;
}Tree;
Tree *create_tree()
{
    Tree *tree = (Tree*)malloc(sizeof(Tree));
    if(tree==NULL){
        printf("Memory allocation failed\n");
        return NULL;
    }
    tree->root = NULL;
tree->size=0;
return tree;
}
void insert_node(Tree *tree,int data){
Node *new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL){
    printf("Memory allocation failed\n");
    return;
};
new_node->data=data;
new_node->left=NULL;
new_node->right=NULL;
if(tree->root==NULL){
    tree->root=new_node;
}
else{
insert(new_node,tree->root);
}
tree->size++;
}
void insert(Node *node,Node *root){
if(root==NULL)
{
    return;
}
if(node->data>root->data){
if(root->right==NULL){
    root->right=node;
}
else{
    insert(node,root->right);
}
}
else if(node->data<root->data){
if(root->left==NULL){
root->left=node;
}
else{
    insert(node,root->left);
}
}
}
void preorder(Node *node){
 if(node==NULL){
return;
 }   
 else{
    printf("%d ",node->data);
    preorder(node->left);
    preorder(node->right);
 }
}
void inorder(Node *node){
 if(node==NULL){
return;
 }   
 else{
    inorder(node->left);
    printf("%d ",node->data);
    inorder(node->right);
 }
}
void postorder(Node *node){
 if(node==NULL){
return;
 }   
 else{
    postorder(node->left);
    postrder(node->right);
    printf("%d ",node->data);
 }
}