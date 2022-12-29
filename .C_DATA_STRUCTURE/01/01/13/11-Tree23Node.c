Tree23Nide *tree23_search(Tree23Node* root, int key)
{
    if(root == NULL)
        return FALSE;
    else if(key == root->data)
        return TRUE;
    else if(root->type == TWO_NODE){
        if(key < root->key)
            return tree23_search(root->left, key);
        else
            return tree23_search(root->right, key);
    }
    else{
        if(key < root->key1)
            return tree23_search(root->left, key);
        else if(key > root->key2)
            return tree23_search(root->right, key);
        else   
            return tree23_search(root->middle, key);
    }
}