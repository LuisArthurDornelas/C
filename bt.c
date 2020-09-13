#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int valor;
    struct node *left;
    struct node *right;
};
typedef struct node node_t;


node_t* insert_new_node(int val){
    node_t* newNode = malloc(sizeof(node_t));
    newNode->valor = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

node_t* insert(node_t* root,int data){
    if (root == NULL){
        root = insert_new_node(data);    
    }
    else if (data<=root->valor){
        root -> left = insert(root->left,data);
    }
    else {
        root->right = insert(root->right,data);
    }
    return root;
}

char search_in_tree(node_t* root,int data){
    if (root = NULL){
        return "f";
    }
    else if (root->valor == data){
        return "t";
    }
    else if (data<=root->valor){
        return search_in_tree(root->left,data);
    }
    else return search_in_tree(root->right,data);
    }



int main(void){
    node_t* root = NULL;
    root = insert(root,5);
    root = insert(root,3);
    printf("%c",search_in_tree(root,4));
    return 0;
}
