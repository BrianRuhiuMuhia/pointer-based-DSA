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
        return;
    }
    tree->root = NULL;
tree->size=0;
return tree;
}