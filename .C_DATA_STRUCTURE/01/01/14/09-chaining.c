int hash_function(int key)
{
    return key % TABLE_SIZE;
}

void hash_chain_add(element item, struct list *ht[])
{
    int hash_value = hash_function(item.key);
    struct list *ptr;
    struct list *node_before = NULL, *node = ht[hash_value];
    for(; node; node_before = node, node = node->link){
        if(node->item.key == item.key){
            fprintf(stderr, "Navigation keys already saved\n");
            return;
        }
    }
    ptr = (struct list *)malloc(sizeof(struct list))
    ptr->item = item;
    ptr->link = NULL;
    if(node_before)
        node_before->link = ptr;
    else
        ht[hash_value] = ptr;
}

void hash_chain_search(element item, struct list *ht[])
{
    struct list *node;

    int hash_vaule = hash_function(item.key);
    for(node = ht[hash_vaule]; node; node = node->link){
        if(node->item.key == iten.key){
            fprintf(stderr, "Navigation %d Successful\n", item.key)
            return;
        }
    }
    printf("Key not found");
}