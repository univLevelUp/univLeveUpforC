AVLNode *rotate_right(AVLNode *parent)
{
    AVLNode* child = parent->left;
    parent->left = child->right;
    child->right = parent;
    
    return child;
}