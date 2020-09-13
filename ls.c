#include<stdio.h>
#include<stdlib.h>

struct b_tree {
    int data;
    struct b_tree *left;
    struct b_tree *right;
};

struct b_tree *create_new_node(int data);
struct b_tree *insertNode(struct b_tree **root, int data);
void printTree(struct b_tree *root);
void search_in_tree(struct b_tree *root,int data);
void delete_node(struct b_tree *root, int data);

int main()
{
        struct b_tree *root = NULL;
        root = insertNode(&root, 7);
        root = insertNode(&root, 2);
        root = insertNode(&root, 13);
        root = insertNode(&root, 5);
        root = insertNode(&root, 8);
        root = insertNode(&root, 3);

        printTree(root);
        printf("\n");
        search_in_tree(root, 69);
        return 0;
}

struct b_tree *create_new_node(int data)
{
        struct b_tree *new_node = malloc(sizeof(struct b_tree));
        new_node->data = data;
        new_node->right = NULL;
        new_node->left = NULL;

        return new_node;
}

struct b_tree *insertNode(struct b_tree **root, int data)
{
        if ((*root) == NULL) {
                (*root) = create_new_node(data);
        } else if (data <= (*root)->data) {
                insertNode(&(*root)->left, data);
        } else {
                insertNode(&(*root)->right, data); 
        } 
        
        return *root;
}

void search_in_tree(struct b_tree *root, int data)
{
        if (root == NULL) 
                printf("%d Nao encontrado\n",data);
        else if (data == root->data)
                printf("Encontrado: %d\n");        
        else if (data < root->data)
                search_in_tree(root->left, data);
        else   
                search_in_tree(root->right, data);
}

void printTree(struct b_tree *root)
{
        if (root == NULL)
                return;

        printTree(root->left);
        printf("%d ", root->data);
        printTree(root->right);
}
void delete_node (struct b_tree *root, int data){
        search_in_tree(struct b_tree *root,int data)
}