void level_order(TreeNode *ptr)
{
    QueueType q;

    init_queue(&q);

    if(ptr == NULL) return;
    enqueue(&q, ptr);
    while (!is_empty(&q)){
        ptr = dequeue(&q);
        printf(" [%d] ", ptr->data);
        if(ptr->left)
            enqueue(&q, ptr->left);
        if(ptr->right)
            enqueue(&q, ptr->right);
    }
}