#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct TreeNode{
    element key;
    struct TreeNode *left, *right;
} TreeNode;

TreeNode *search(TreeNode * node, int key)
{
    if(node == NULL) return NULL;
    if(key == node->key) return node;
    else if(key < node->key)
        return search(node->left, key);
    else
        return search(node->right, key);
}

TreeNode * new_node(int item)
{
    TreeNode * temp = (TreeNode *)malloc(sizeof(TreeNode));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

TreeNode * insert_node(TreeNode * node, int key)
{
    if(node == NULL) return new_node(key);

    if(key < node->key)
        node->left = insert_node(node->left, key);
    else if(key > node->key)
        node->right = insert_node(node->right, key);
    
    return node;
}

TreeNode * min_value_node(TreeNode * node)
{
    TreeNode * current = node;

    while(current->left != NULL)
        current = current->left;

    return current;
}

TreeNode * delete_node(TreeNode * root, int key)
{
    if(root == NULL) return root;

    if(key < root->key)
        root->left = delete_node(root->left, key);
    else if(key > root->key)
        root->right = delete_node(root->right, key);
    else{
        if(root->left == NULL){
            TreeNode * temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            TreeNode *temp = root->left;
            free(root);
            return temp;
        }

        TreeNode * temp = min_value_node(root->right);
        root->right = delete_node(root->right, temp->key);
    }
    return root;
}

void inorder(TreeNode * root){
    if(root){
        inorder(root->left);
        printf("[%d] ", root->key);
        inorder(root->right);
    }
}

int main(void)
{
    TreeNode * root = NULL;
    TreeNode * tmp = NULL;

    root = insert_node(root, 30);
    root = insert_node(root, 20);
    root = insert_node(root, 10);
    root = insert_node(root, 40);
    root = insert_node(root, 50);
    root = insert_node(root, 60);

    printf("inary Search Tree inorder result\n");
    inorder(root);
    printf("\n\n");
    if(search(root, 30) != NULL)
        printf("Found 30 in the inary Search Tree\n");
    else
        printf("30 not found in the initial Search Tree\n"); 
    
    return 0;
}