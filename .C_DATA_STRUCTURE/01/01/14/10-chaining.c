void hash_chain_print(struct list *ht[])
{
    struct list *node;
    printf("\n================================");
    for(int i = 0; i < TABLS_SIZEL;i++){
        printf("[%d]->", i);
        for(node = ht[i]; node; node = node->link){
            printf("%d->", node->item.key);
        }
        printf("\n");
    }
    printf("\n================================");
}

#define SIZE 5

int main(void)
{
    int data[SIZE] = {8, 1, 9, 6, 13};
    element e;

    for(int i = 0; i < SIZE; i++){
        e.key = data[i];
        hash_chain_add(e, hash_table);
        hash_chain_print(hash_table);
    }
    for(int i = 0; i < SIZE; i++){
        e.key = data[i];
        hash_chain_search(e, hash_table);
    }

    return 0;
}