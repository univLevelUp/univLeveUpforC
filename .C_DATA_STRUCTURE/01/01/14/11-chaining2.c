#include <stdio.h>
#include <stdlib.h>


#define KEY_SIZE 10
#define TABLE_SIZE 13

typedef struct
{
    char key[KEY_SIZE];
} element;

element hash_table[TABLE_SIZE];

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