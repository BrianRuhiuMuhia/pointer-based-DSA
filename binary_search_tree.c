typedef struct Node{
struct Node *left;
struct Node *right;
int data;
}Node;
typedef struct Tree{
    struct Node *root;
    int size;
}
void *create_tree()
{
    Tree new_tree=malloc(sizeof(Tree));
    if(new_tree==NULL)
    {
        printf("Error creating Tree");
        exit(1);
    }
    new_tree->root=malloc(sizeof(Node));
    if(new->root==NULL)
    {
        printf("Error creating root of Tree");
        exit(1);
    }
    new_tree->size=0;
    new_tree->left=NULL;
    new_tree->right=NULL;
    return new_tree;
}
void insert(Tree *tree,int data)
{
if(tree==NULL)
{
    printf("Error");
    exit(1);
}
Node *new_node=(Node*)malloc(sizeof(Node));
if(new_node==NULL)
{
    printf("Error Assigning Memory");
    exit(1);
    return;
}
new_node->data=data;
new_node->left=malloc(sizeof(Node));
new_node->right=malloc(sizeof(Node));
if(new_node->left==NULL || new_node->right==NULL)
{
    printf("Error Assigning Memory");
    exit(1);
}
if(tree->root==NULL)
{
    tree->root=new_node;
}
else{
insert_newnode(tree->root,new_node);
}
}
void insert_newnode(Node *root,Node *new_node)
{
if(new_node->data>root->data)
{
    if(root->right==NULL)
    {
        root->right=new_node;
    }
    else{
        insert_newnode(root->right,new_node);
    }
}
else if(new_node->data<root->data)
{
    if(root->left==NULL)
    {
        root->left=new_node;
    }
    else{
        insert_newnode(root->left,new_node);
    }
}
}
void inorder_traversal(Node *root)
{
if(root!=NULL)
{
    printf("%d\n",root->data);
    inorder_traversal(root->left);
    inorder_traversal(root->right);
}

    return
}