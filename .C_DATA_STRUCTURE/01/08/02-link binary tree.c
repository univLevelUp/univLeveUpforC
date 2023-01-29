#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode{
    int data;
    struct TreeNode *left, *right;
} TreeNode;

//      15
//4         20
//1     16      26
TreeNode n1 = {1, NULL, NULL};
TreeNode n2 = {4, &n1, NULL};
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = {20, &n3, &n5};
TreeNode n6 = {15, &n2, &n5};
TreeNode *root = &n6;

void inorder(TreeNode *root){
    if(root != NULL){
        inorder(root->left);
        printf("[%d] ", root->data);
        inorder(root->right);
    }
}

void postorder(TreeNode *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("[%d] ", root->data);
    }
}

int main(void)
{
    printf("inorder traversal =");
    inorder(root);
    printf("\n");

    printf("preorder traversal =");
    inorder(root);
    printf("\n");

    printf("postorder traversal =");
    inorder(root);
    printf("\n");  

    return 0;
}