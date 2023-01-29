TreeNode * insert_node(TreeNode * node, element key)
{
    if(node == NULL) return new_node(key);

    if(compare(key, node->key) < 0)
        node->left = insert_node(node->left, key);
    else if(compare(key, node->key) > 0)
        node->right = insert_node(node->right, key);

    return node;
}

TreeNode * delete_node(TreeNode *root, element key){
    if(root == NULL) return root;

    if(compare(key, root->key) < 0)
        root->left = delete_node(root->left, key);
    if(compare(key, root->key) > 0)
        root->right = delete_node(root->right, key);
    else{
        if(root->left == NULL){
            TreeNode * temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right = NULL){
            TreeNode *temp = root->left;
            free(root);
            return temp;
        }
        TreeNode * temp = min_value_node(root->right);
        
        root->key = temp->key;
        root->right = delete_node(root->right, temp->key);
    }
    return root;
}